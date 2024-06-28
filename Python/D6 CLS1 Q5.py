m=int(input())
n=30
s=35
for i in range(0,m):
    if i%2==0:
        n+=i*4
        print(n,end=' ')
    else:
        s+=(i//2)*6
        print(s,end=' ')