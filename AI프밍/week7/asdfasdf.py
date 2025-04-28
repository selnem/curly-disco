import torch
x=torch.randn(4,3,2)
y=torch.randn(3,3,2)
y_T=y.permute(0,2,1)

t=x@y_T
