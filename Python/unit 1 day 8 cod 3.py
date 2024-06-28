t=0
r=int(input())
m=int(input())
n=int(input())
s=int(input())
while r>0:
    if r>0:
        m+=1
        r-=1
        t+=1
    if r>0:
        n+=1
        r-=1
        t+=1
    if r>0:
        s+=1
        r-=1 
        t+=1
    if m>=25:
        m=m-25
        r=r+20
    if n>=120:
        n=n-120
        r=r+80
    if s>=12:
        s=s-12
        r=r+8
print(t)
