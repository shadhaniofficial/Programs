t=[]
n=int(input())
for i in range(n):
    t.append(int(input()))
for i in range(len(t)):
    a=min(t)
    c=t.count(a)
    for j in range(c):
        t.remove(a)
    print(a,'occurs',c,end='')
    if(c>1):
        print('times')
    else:
        print('time')
    if(i>len(t)):
        break