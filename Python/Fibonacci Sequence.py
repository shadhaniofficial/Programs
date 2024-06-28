n,n1,n2,count = int(input('n terms = ')),0,1,0
if n <= 0:
    print ('enter the positive')
elif n == 1:
    print ('Fibonacci sequence upto',n,':',n1)
else:
    print ('Fibonacci sequence upto',n,':')
    while count < n:
        print (n1,end =' , ')
        n3 = n1 + n2
        n1 = n2
        n2 = n3
        count += 1
print()