n=int(input())
for i in range(n):
    n1,n2=input().split()
    n1=int(n1,2)
    n2=int(n2,2)
    ans=bin(n1+n2)
    print(ans[2:])
