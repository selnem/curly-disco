import numpy as np

x=np.array([1,2,3,4,5])
y=x.reshape(5,1)#arr[5]=>arr[5][1] veiw obj

y[0,0]=99
print(x)
print(y)

#veiw 오브젝트는 메모리를 보는 방법만 바꾸는 것이다 가볍다!

