c=int(input())
tray=[]
for i in range(2*c):
    tray.append(5)
print(tray[:c])
print(tray[c:])
for i in range(c):
    print(i+1,end=' ')
print('\n',end='')
for i in range(c):
    print(2*c-i,end=' ')
print('\n')
print('choose 1-a or 2-b')
start=int(input())
print('type position 1 to',c)
a=int(input())
if start == 2:
    a=a+c
temp=tray[a-1]
tray[a-1]=0
for i in range(a+1,c*2):
    tray[i]+=1
    temp-=1
    if temp==0:
        
print(tray[:c])
print(tray[c:])