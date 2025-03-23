import numpy as np
arr=np.array([1,2,3,4,5])
arr[2] #output: 3
arr[-4] #output: 2

arr_2d=np.array([[1,2,3],[4,5,6]])
arr_2d[1,2]# output 6
arr_2d[1][2] #outpuy 6 but 위와 다른 의미 1을 간뒤 2를 감(2번) [1]을 가서 tmp veiw 객체 생성 이후 2를 감
#슬라이싱
print(arr[1:4]) #[2 3 4]
arr_2d_1=np.array([[1,2,3],[4,5,6],[7,8,9]])
print(arr_2d_1[0:2,1:3]) #[[2 3] [5 6]] 슬라이싱은 끝이 포함이안됨 0:2 => 0,1
#슬라이싱은 veiw 객체
rng=np.random.default_rng()
x=rng.random(size=(100,100,100))

a=x[0,0:2,0:2]
b=x[0,0:2,0:2].copy()
print(a,"\n\n",b)
print(a.base.shape,"\t",b.base)# a는 x의 view b는 복사하여 독립적 객체 base는 참조한 객체를 불러옴
                                # 따라서 b의 base none이 된다

x = np.arange(0,27).reshape(3, 3, 3)
print(f"x is \n {x}\n")
print(f"x[0] indexing 첫번째 축: {x[0]}")
print(f"x[:,0]indexing first row across all layers : \n{x[:,0]}\n")
print(f"x[...,0] indexing first colums across all layer-rows: \n{x[...,0]}\n")#...은 :,:,:...을 대체 [:,:,0] 과 동일

arr=np.arange(1,6)
print(arr[:,np.newaxis])#shape (6)->(6,1)
print(arr[np.newaxis,:])#shape (6)->(1,6)
arr_2d=np.array([[1,2,3],[4,5,6],[7,8,9]])
print(arr_2d[:,np.newaxis,:])#shape(3,3)->(3,1,3)



