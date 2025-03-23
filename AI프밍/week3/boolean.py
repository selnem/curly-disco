import numpy as np

x=np.array([[1. ,-1.,-2.,3],[-1,3.,-2.,0]])
print(x.dtype)
print(x<0)#print bool array
print((x<0).nonzero()) #print(np.where(x<0))
print(x[x<0])
x[x<0]+=4
print(x)

x=np.arange(35).reshape(5,7)

b = x>20
print(b[:,5].nonzero())
print(x[b[:,5]])

arr=b[:,5].nonzero()
print(arr)
print(x[arr])

