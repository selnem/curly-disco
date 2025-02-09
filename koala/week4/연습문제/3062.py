n=int(input())
for i in range(n):
    line=str(input())
    ans=str(int(line)+int(line[::-1]))
    if(ans==ans[::-1]):
        print("YES")
    else:
        print("NO")
