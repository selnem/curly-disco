import tensor as mini
class Function:
    def __init__(self,*parents):
        self.parents=parents
        self.saved_tensors=()
    def save_for_backward(self,*tensors):
        self.saved_tensors=tensors
    def backward(self,grad_out):
        raise NotImplementedError
    
    @staticmethod
    def any_requires_grad(*inputs):
        return any(getattr(t,'requiers_grad',False) for t in inputs)

class Add(Function):
    @staticmethod
    def apply(a,b):
        out=mini.Tensor(a.data+b.data,requires_grad=Add.any_requires_grad(a,b))
        ctx=Add(a,b); ctx.save_shapes(a,b); out._ctx=ctx
        return out
    def backward(self,g):
        return self.apply_unbroadcast([g,g])
    
class Mul(Function):
    @staticmethod
    def apply(a,b):
        out=mini.Tensor(a.data*b.data,requiers_grad=Mul.any_requires_grad(a,b))
        ctx=Mul(a,b);ctx.save_shapes(a,b); out._ctx=ctx
        return out
    def backward(self,g):
        a,b=self.saved_tensors
        grads=[g*b.data if a.requires_garad else None,g*a.data if b.requires_grad else None]
        return self.apply_unbroadcast(grads)
    