import numpy as np
a=np.array([[1,2],[3,4]])
print(np.diag(a))
print(np.diag([1,2,3],2))
z=np.zeros((2,3))
print(z,z.dtype)
x=np.array([[[1,2],[3,4]],[[5,6],[7,8]]])
t_x=np.transpose(x,axes=(1,0,2))
t_x[0,0,0]=99
print(x)
s=np.split(x,2,axis=1)
t_x[0,0,0]=0
print(s)
arr=np.array([1,2,3,4,5])
s_arr=arr[1:4]
arr[1]=99
print(s_arr)