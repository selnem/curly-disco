import numpy as np

def modify_array(arr):
    arr[0]=99

x=np.array([1,2,3])
print("befor fuc",x)
modify_array(x)
print("after fuc",x)
