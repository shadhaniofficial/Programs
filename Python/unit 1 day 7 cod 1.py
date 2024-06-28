m=int(input())
n=1
s=2.0
print(n,s,end=' ')
for i in range(3,m+1):
    if i%2==0:
        print(s*3.0,end=' ')
        s*=3
    else:
        print(n*3.0,end=' ')
        n*=3
