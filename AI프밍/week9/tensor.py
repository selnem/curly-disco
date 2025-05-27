import numpy as np
import function

class Tensor:
    def __init__(self,data,requiers_grad=False,_ctx=None):
        
    def backward(self,grad=None):
        if not self.requires_grad:
            return
        if grad is None:
            if self.data.size != 1:
                raise RuntimeError("grad must be specified for non-scalar tensor")
            grad=np.ones_like(self.data)
        topo,visited=[],set()
    
        def build(t):
            if t not in visited:
                visited.add(t)
                if t._ctx:
                    for p in t._ctx.parents:
                        build(p)
                topo.append(t)
        build(self)
        self.grad=grad
        
    def zero_grad(self):
        self.grad=None
    def __repr__(self):
        return f"Tesor(data={self.data},grad={self.grad})"
    # ---oper overloding---
    def __add__(self,o): return Add.apply(self,o if isinstance(o,Tensor) else Tensor(o))

