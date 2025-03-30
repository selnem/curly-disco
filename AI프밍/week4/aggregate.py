import numpy as np
#axis 는 가장 바깥쪽 축부터 0,1,2 like arr[3][2][1] axis=0 =>3, axis=1 => 2, axis=2 =>1
a=np.arange(2*3*2).reshape(2,3,2)
print(a)
x=np.max(a,axis=2,keepdims=True)
print(x)
y=np.sum(a,axis=1)
print(y)

#해당 같은 차원끼리 다른 차원과 분리해서 더한다!