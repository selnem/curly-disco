import numpy as np
import torch

a=np.array([[1,2,3],[4,5,6]])
ta=torch.tensor(a)

print(ta)
print(ta.dtype)
print(ta.dim())
print(ta.shape)
print(ta.numel())
print(ta[0,1])
print(ta[0,1].item())