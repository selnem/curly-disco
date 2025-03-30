import numpy as np
#원래 배열의 곱은 크기가 같거나 한쪽이 1일때 각각 큰쪽에 작은 값을 곱한다.
#하지만 파이썬 넘파이 브로드캐스팅은 사이즈 맞추어 곱해준다
#ex

arr_3d=np.arange(256*256*3).reshape(256,256,3)
arr_4d=np.arange(8*1*6*1).reshape(8,1,6,1)
scale_1d=np.full((3),2)
scale_3d=np.full((7,1,5),2)
ans1=arr_3d*scale_1d
ans2=arr_4d*scale_3d
print(ans1.shape)
print(ans2.shape)
arr_3dd=np.full((3,3,3),3)
s_1dd=np.full((3),2)
arr_4dd=np.full((2,1,2,1),2)
s_3dd=np.full((2,1,1),3)
a=arr_3dd*s_1dd
b=arr_4dd*s_3dd
print(a)
print(b)
