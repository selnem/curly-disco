import torch
a=torch.tensor([[1,2],[3,4]])
print(torch.sum(a))
print(torch.sum(a,dim=0))#[1,2]+[3,4]=[4,6] keepdim=True하면 [[4,6]]
print(torch.sum(a,dim=1))#[1+2,3+4]

b=torch.tensor([[3,1,4],[1,5,9],[2,6,5]])
print(torch.argmax(b))
print(torch.argmax(b,dim=1))
print(torch.argmax(b,dim=0))

values,indices=torch.topk(b,k=2,dim=1)
print(values)
print(indices)
print(torch.norm(b.float()))#norm은 거리
print(torch.norm(b.float(),dim=1))
print(torch.norm(b.float(),p=1,dim=0))#p 
print(torch.cumsum(b,dim=1))#누적합
print(torch.cumprod(b,dim=0))#누적곱
c=b>4
print(torch.any(c))
print(torch.all(c))
print(torch.all(c,dim=1))
