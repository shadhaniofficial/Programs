a=[int(i) for i in input().split()]
b=a.copy()
l=len(a)
print(b[0],end=' ')
for i in range(1,l-1):
    be=max(b[0:i])
    af=max(b[i+1:])
    if (be<af):
        t=be
    else:
        t=af
    if (b[i]<t):
        b[i]=t
    print(b[i],end=' ')
print(b[-1])
print(abs(sum(a)-sum(b)))