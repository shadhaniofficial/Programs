#input only from 0 to 9

n=int(input())
k=1
s=''
s1=''

while (k<=n+1):

    l=1
    s+=str(k)
    s1+=' '*(len(s)-2)
    print(s1,end='')

    while (l<=n-k+1):
        print(s,end=' '*(2*l-1))
        l+=1
    print()
    s+=' '
    k+=1
