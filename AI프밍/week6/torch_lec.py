import torch
import numpy as np

x=torch.arange(3*3*3,dtype=torch.float32).reshape(3,3,3)

y_mps=x.to('mps')#copy obj
x[0,0,0]=99
print(y_mps)
z_mps=x.to('mps')
print(z_mps)
print(id(z_mps))
z_mps=z_mps+y_mps#오른쪽 z_mps는 사라지고 새로 할당해서 저장
print(id(z_mps))# 메모리주소 달라지는것 확인가능 xxxx36->xxxx76
print(z_mps)
z_mps+=y_mps #C언어 랑 똑같은 느낌으로 그자리에 그대로 더함 그래디언트사용 불가
print(id(z_mps))#주소바뀌지 않는것 확인 가능 xxxx76
print(z_mps)
w_mps=y_mps+3
z=z_mps.to('cpu')
numpy_z=z.numpy()
print(z_mps)
print(y_mps)
print(w_mps)
print(z)

print("\n\n\n")
a=np.arange(3*3).reshape(3,3)
print(id(a))
a+=1
print(id(a))