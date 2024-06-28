a=[i for i in input().replace('-',' ').upper().split()]
if len(a)==1:
    print(a[0][:4])
elif len(a)==2:
    print(a[0][:2]+a[1][:2])
elif len(a)==3:
    print(a[0][0]+a[1][0]+a[2][:2])
else:
    print(a[0][0]+a[1][0]+a[2][0]+a[3][0])
          