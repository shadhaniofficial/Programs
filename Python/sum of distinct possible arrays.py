n=int(input())
a=[int(i) for i in input().split()]
s=1
b=a[0]
for i in range(1,n):
   s*=i
   b+=a[i]
c=int('1'*n)
print(c*s*b)