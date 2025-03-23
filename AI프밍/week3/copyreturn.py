import numpy as np

arr=np.array([1,2,3,4,5])
print(arr[[1,2,4]])# output:[2,4,5](1,3,4) not view it's copy

arr_2d=np.array([[1,2,3],[4,5,6],[7,8,9]])
print(arr_2d[[0,2],[1,2]])#output:[2 9] not view it is copy
#슬라이싱이 아닌 모든 부위를 부분적으로 인덱싱 할 떄
#엄청 큰 배열에서 하나씩 view를 뽑아온다면 비효율적이므로 하나 새로 만들어서 복사
 
rows= arr_2d[np.array([0,2])]# arr_2d[[0,2]]
#array([[1 2 3],[7 8 9]])

all_rows=np.array([0,1,2])[:,np.newaxis]
col = arr_2d[all_rows,[0,2]] # arr_2d[[[0],[1],[2]], [0, 2]]
#array([[1, 3],[4, 6], [7,9]])

coners = arr_2d[[[0],[2]],[0,2]]
#array([[1,3],[7,9]])
