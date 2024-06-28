s=30
a=-2
b=10
c=1
l=int(input())
n=int(l/2)
while(c<=n):
    if(l<=2):
        for i in range(n):
            print(s,end=' ')
            s+=5
    else:
        for i in range(n):
            if (i%2==0):
                s-=a
                a-=2
            else:
                s+=b
                b+=2
            print(s,end=' ')
    c+=i