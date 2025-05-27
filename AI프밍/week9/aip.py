import torch
import numpy as np
import tensor
class AIPParameter(torch.Tensor):

   #__new__는 클래스 객체를 호출해 인스턴스화 할 떄 호출되며 그 반환값을 __init__의 첫번째 인자인 self로 반환한다.
   #하지만 밑에 재정의를 조짐으로 새로 해버림.
    def __new__(cls, data): 
        # Ensure the data is a tensor
        if not isinstance(data, torch.Tensor):
            data = torch.tensor(data)

        # Use _make_subclass without requires_grad
        param = torch.Tensor._make_subclass(cls, data)
        param.requires_grad = True
        return param


class AIPModule:
    def __init__(self):
        self._parameters = {}
        self._modules = {}
    
    def __setattr__(self, name, value):
        if isinstance(value, AIPParameter):
            self._parameters[name] = value
        elif isinstance(value, AIPModule):
            self._modules[name] = value
        super().__setattr__(name, value)

    def parameters(self):
        for param in self._parameters.values():
            yield param
        for module in self._modules.values():
            yield from module.parameters()

    def named_parameters(self, prefix=''):
        for name, param in self._parameters.items():
            yield prefix + name, param
        for module_name, module in self._modules.items():
            sub_prefix = f"{prefix}{module_name}."
            yield from module.named_parameters(prefix=sub_prefix)


class AIPEmbedding(AIPModule):
    def __init__(self, num_embeddings, embedding_dim):
        super().__init__()
        self.num_embeddings = num_embeddings
        self.embedding_dim = embedding_dim
        self.embeddings = AIPParameter(torch.randn(num_embeddings, embedding_dim))
        
    def __call__(self, indices):
        return self.embeddings[indices]

  
class AIPPositionalEncoding():
    def __init__(self, d_model, maxlen=100):
        self.encoding = torch.zeros(maxlen, d_model)
        position = torch.arange(0, maxlen, dtype=torch.float).unsqueeze(1)
        div_term = torch.exp(torch.arange(0, d_model, 2).float() * -(np.log(10000.0) / d_model))
        self.encoding[:, 0::2] = torch.sin(position * div_term)
        self.encoding[:, 1::2] = torch.cos(position * div_term)
    
    def __call__(self, x):
        return x + self.encoding[:x.size(1), :]

  
class AIPLinear(AIPModule):
    def __init__(self, in_features, out_features, use_bias=True):
        super().__init__()
        self.in_features = in_features
        self.out_features = out_features
        self.use_bias = use_bias
        
        self.weight = AIPParameter(torch.randn(out_features, in_features) * (1.0 / in_features**0.5))
        
        if use_bias:
            self.bias = AIPParameter(torch.zeros(out_features))
        else:
            self.bias = None
    
    def __call__(self, x):
        output = x @ self.weight.T 
        
        if self.use_bias and self.bias is not None: 
            output = output + self.bias
        
        return output

   
class AIPLayerNorm(AIPModule):
    def __init__(self, normalized_shape, eps=1e-6, affine=True):
        super().__init__()
        
        self.normalized_shape = normalized_shape if isinstance(normalized_shape, (tuple, list)) else (normalized_shape,)
        self.eps = eps
        self.affine = affine        
        
        if self.affine:
            self.weight = AIPParameter(torch.ones(self.normalized_shape))
            self.bias = AIPParameter(torch.zeros(self.normalized_shape))
        else:
            self.register_parameter('weight', None)
            self.register_parameter('bias', None)

    def __call__(self, x):
        dims = tuple(range(-len(self.normalized_shape), 0))
        mean = torch.mean(x, dim=dims, keepdim=True)
        var = torch.var(x, dim=dims, keepdim=True)
        x = (x - mean) / torch.sqrt(var + self.eps)
        
        if self.affine:
            x = x * self.weight + self.bias
            
        return x

   
def relu(x):
    return torch.maximum(torch.tensor(0.0), x)

m=AIPModule()
m.layer1=AIPLinear(10,5)
m.layer2=AIPLinear(5,2,use_bias=False)

#print(dict(m.named_parameters()))
print(m.layer1)