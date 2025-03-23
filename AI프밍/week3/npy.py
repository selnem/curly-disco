import numpy as np
a1D=np.array([1,2,3,4],dtype=np.int16) #dtype 안주면 디폴트
a2D=np.array([[1,2],[3,4]],dtype=np.int32)
a3D=np.array([[[1,2],[3,4]],[[5,6],[7,8]]],dtype=np.float32)

print(f"a1D s:{a1D.shape},a2D s:{a2D.shape},a3D s:{a3D.shape}")
print(f"{a1D.dtype}") #디폴트 int 64bit

b1=np.arange(10)
b2=np.arange(2,10,dtype=float)
b3=np.arange(2,3,0.1)
print(f"{b1}")
print(f"{b2}")
print(f"{b3}")
print(f"{b3.dtype}")
