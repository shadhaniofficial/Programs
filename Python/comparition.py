a,b=input(),input()
x,y,z='','',''
for i in range(len(a)):
    if a[i]<=b[i]:
        c,d=a[i],b[i]
    else:
        c,d=b[i],a[i]
    x,y,z=x+c,y+d,z+str(abs(int(c)-int(d)))
print(x,y,z)