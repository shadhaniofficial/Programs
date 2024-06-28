a=[int(i) for i in input().split()]
#x=max(a[(a.index(min(a))+1):])-min(a)
l=len(a)
mp=0
for i in range(l):
    for j in range(i+1,l):
        t = a[j] - a[i]
        if (t > mp):
            mp = t
print(mp)