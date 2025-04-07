import torch



x = torch.randn(2, 3, 4) 


y = x.permute(0, 2, 1)  # reshape to (2, 4, 3) 

z = y.contiguous().view(2,-1)  # flatten the last two dimensions 
print(z)