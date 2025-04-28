import torch
import numpy as np
X=torch.tensor([[0,0],[0,1],[1,0],[1,1]])
O=torch.tensor([[0],[1],[1],[0]])

hidden_size=4

W1=torch.randn((2,hidden_size),requires_grad=True)
b1=torch.randn((hidden_size,),requires_grad=True)
W2=torch.randn((hidden_size,1),requires_grad=True)
b2=torch.randn((1,),requires_grad=True)

def forward(X):
    h=X@W1+b1
    h=F.gelu(h)
    y=h@W2+b2
    y=torch.sigmoid(y)
    
    return y

loss=torch.mean((y-O)**2)
lr=0.1
for epoch in range(10000):
    y=forward(X)