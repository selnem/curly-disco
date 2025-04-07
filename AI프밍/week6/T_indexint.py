import torch
import numpy as np

x=torch.randint(0,100,(6,4))
print(x)
parts=torch.split(x,3,dim=0)
print(parts)
#parts=torch.split(x,[2,1,3],dim=0)
print(parts)
mrg=torch.cat(parts,dim=0)
print(mrg)
arr=np.random.randint(0,100,(6,4))
print(arr)
parts=np.split(arr,3,axis=0)
print(parts)
parts=np.split(arr,[2,5],axis=0)
print(parts)

