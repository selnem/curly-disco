import copy
orig=[1,[2,3],4]

s_copy=copy.copy(orig)
s_copy[1][0]=99
print(orig)
#[1,ref,2]를 복사해와서 ref의 주소 카피함 1을변경해도 orig를 변경하지않음 맨표면만 카피함
d_copy=copy.deepcopy(orig)
d_copy[1][0]=100
print(orig)

