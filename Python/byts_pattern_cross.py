n=int(input())
k=1
while (k<=n):
    a=1
    while (a<=n):
        s = '*' if ((a==k)|(a+k-1==n)) else ' '
        print(s,end='')
        a+=1
    k+=1
    print()