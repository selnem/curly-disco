import numpy as np

A=np.array([[1,2],[3,4]])
B=np.array([[5,6],[7,8]])
C=np.array([[9,10],[11,12]])
D=np.array([[13,14],[15,16]])
top_row=np.hstack((A,B))
bottom_row=np.hstack((C,D))
vst_top_bot=np.vstack((top_row,bottom_row))

print(top_row)
print(bottom_row)
print(vst_top_bot)

a=np.arange(4*3*5*5).reshape(4,3,5,5)
b=np.arange(3*3*5*5).reshape(3,3,5,5)
c=np.arange(4*7*5*5).reshape(4,7,5,5)
d=np.arange(4*4*5*5).reshape(4,4,5,5)

x=np.concatenate((a,c,d),axis=1)
y=np.concatenate((a,b),axis=0)
print(a,b,c,d)
print(x,y)
print(x.shape,y.shape)
