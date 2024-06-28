n=int(input('Enter - '))
c=[2]
if n==0 or n==1:
    print([])
elif n==2:
    print(c)
else:
    for i in range(3,n+1):
        t=0
        for j in range(len(c)//2+1):
            if i%c[j]==0:
                t+=1
            elif t==2:
                break
        if t==0:
            c.append(i)
    print(c)
    print(len(c))
            
            
