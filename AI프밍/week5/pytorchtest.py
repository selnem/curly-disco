import torch
if torch.backends.mps.is_available():
    mps_device = torch.device("mps")
    x = torch.full((1000,400,1000),100,device=mps_device)
    print (x)
else:
    print ("MPS device not found.")
