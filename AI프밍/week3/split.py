import numpy as np

x=np.arange(24).reshape(2,3,4)
x_hsplit=np.hsplit(x,3)
x_split=np.split(x,3,axis=1)#[[2,1,4][2,1,4][2,1,4]]형태의 리스트를 ([2,1,4]는 shape)를 반환

print(x_hsplit)
print(x_split)