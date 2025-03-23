import numpy as np

arr=np.array([[0,1,1],[1,1,2],[2,1,2]])
rowsum=arr.sum(axis=1)
print(rowsum)
print(arr[rowsum<=4])

x=np.array([[0,1,2],[3,4,5],[6,7,8],[9,10,11]])
evenrow = (x.sum(axis=1)%2==0).nonzero()