import torch

x=torch.arange(6).reshape(2,3)
y=torch.arange(6).reshape(3,2)
u=torch.arange(3)
v=torch.arange(3)

print(u@v)
print(x@u)
print(x@y)
#주의 수학처럼 행렬곱이 2*3 3*1 이 되어야 하지만
#파이에서는 2*3 dot 3*1 으로 전치 자동으로 되는느낌 곱하는놈 1차원 텐서일때만
#모양맞으면 그대로 들어감
#주의 메트릭스에서는 수학처럼 해줘야함

X=torch.ones(2*2*2*2).reshape(2,2,2,2)

a1=torch.arange(3*3*2).reshape(3,3,2)
a2=torch.arange(3*2*4).reshape(3,2,4)
print(a1)
print(a2)
ax=a1@a2
print(ax)

a=torch.randn(20,768)
b=torch.randn(30,768)
a_norm=a/a.norm(dim=1)[:,None]
b_norm=b/b.norm(dim=1)[:,None]
cos_sim=a_norm@b_norm.T
indice=torch.argmax(cos_sim,dim=1)
print(cos_sim)
print(indice)