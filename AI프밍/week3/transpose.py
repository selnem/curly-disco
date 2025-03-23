import numpy as np

arr=np.array([[1,2,3],[4,5,6]])
trans_arr=np.transpose(arr)
print(trans_arr)

arr3D=np.arange(8).reshape(2,2,2)
trans_3D=np.transpose(arr3D,axes=(1,0,2))
print(arr3D)
print(trans_3D)