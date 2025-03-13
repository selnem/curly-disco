import numpy as np

x=np.array([1,2,3],[4,5,6])
y=x.copy()#independent copy

#슬라이싱 인덱싱은 view obj 생성한다

y[0,0]=99

print(x)

