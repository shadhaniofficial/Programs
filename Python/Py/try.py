"""
*
**
***
****
*****
"""
def pattern(n):
    for i in range(1, n+1):
        print("*" * i)

"""
*****
****
***
**
*
"""
def pattern1(n):
    for i in range(n,0,-1):
        print("*" * i)

"""
*
**
***
****
*****
****
***
**
*
"""
def pattern2(n):
    for i in range(1,n):
        print("*" * i)
    
    for j in range(n,0,-1):
        print("*" * j)

"""
1
22
333
4444
55555
"""
def pattern3(n):
    for i in range(1,n+1):
        print(f"{i}" * i)

"""
Enter the number of lines: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
"""
def pattern4(n):
    k = 1
    for i in range(n):
        for j in range(i+1):
            print(k, end=" ")
            k +=1
        print()

"""
Enter the number of lines: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
"""
def pattern5(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(f"{j}",end=" ")
        print()

"""
Enter the number of lines: 5
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
"""
def pattern6(n):
    for i in range(1,n+1):
        for j in range(n,i-1,-1):
            print(f"{n-j+1}",end=" ")
        print()
    
"""
Enter the number of lines: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1
"""
def pattern7(n):
    for i in range(n):
        for j in range(1,i+1):
            print(f"{j}",end=" ")
        print()
    for i in range(1,n+1):
        for j in range(n,i-1,-1):
            print(f"{n-j+1}",end=" ")
        print()    

"""
Enter the number of lines: 5
*****
*****
*****
*****
*****
"""
def pattern8(n):
    for i in range(n):
        print("*" * n)

"""
Enter the number of lines: 5
00000
11111
22222
33333
44444
"""
def pattern9(n):
    for i in range(n):
        print(f"{i}" * n)

"""
Enter the number of lines: 3
123
456
789
"""
def pattern10(n):
    num = 1
    for i in range(1,n+1):
        for j in range(1,n+1):
            print(num,end="")
            num+=1
        print()
"""
    *
   ***
  *****
 *******
*********
"""
def pattern11(n):
    for i in range(n):
        # Print leading spaces
        for j in range(n - i - 1):
            print(" ", end="")
        # Print stars
        for k in range(2 * i + 1):
            print("*", end="")
        # Move to the next line
        print()

"""
*********
 *******
  *****
   ***
    *
"""
def pattern12(n):
    for i in range(n-1,-1,-1):
        for j in range(n - i - 1):
            print(" ",end="")
        for k in range(2 * i + 1):
            print("*",end="")
        print()

"""
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
"""
def pattern13(n):
    for i in range(n-1):
        for j in range(n - i - 1):
            print(" ", end="")
        for k in range(2 * i + 1):
            print("*", end="")
        print()
    for i in range(n-1,-1,-1):
        for j in range(n - i - 1):
            print(" ",end="")
        for k in range(2 * i + 1):
            print("*",end="")
        print()

"""
Enter the number of lines: 5
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
"""
def pattern14(n):
    for i in range(n-1,0,-1):
        for j in range(n - i - 1):
            print(" ",end="")
        for k in range(2 * i + 1):
            print("*",end="")
        print()
    for i in range(n):
        for j in range(n - i - 1):
            print(" ", end="")
        for k in range(2 * i + 1):
            print("*", end="")
        print()

"""
Enter the number of lines: 5

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

"""
def pattern15(n):
    start = 1
    for i in range(n+1):
        if i % 2 == 0:
            start = 0
        else:
            start = 1
        for j in range(0,i):
            print(start, end=" ")
            start = 1 - start
        print()
        
"""
Enter the number of lines: 5

1        1
12      21
123    321
1234  4321
1234554321
"""
def pattern16(n):
    for i in range(1,n+1):
        #number
        for j in range(1,i+1,1):
            print(j,end="")
            temp = j
        #space
        for k in range(2*n-temp-temp):
            print(" ",end="")
        #number
        for l in range(i,0,-1):
            print(l,end="")
        print()

"""
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
"""
def pattern17(n):
    for i in range(n,0,-1):
        #number
        for j in range(1,i+1,1):
            print("*",end="")
            temp = j
        #space
        for k in range(2*n-temp-temp):
            print(" ",end="")
        #number
        for l in range(i,0,-1):
            print("*",end="")
        print()
    for i in range(1,n+1):
        #number
        for j in range(1,i+1,1):
            print("*",end="")
            temp = j
        #space
        for k in range(2*n-temp-temp):
            print(" ",end="")
        #number
        for l in range(i,0,-1):
            print("*",end="")
        print()
        
"""
*****
*   *
*   *
*   *
*****
"""
def pattern18(n):
    for i in range(n):
        for j in range(n):
            if i==0 or j==0 or i==n-1 or j==n-1:
                print("*",end="")
            else:
                print(" ",end="")
        print()

"""
4444
4334
4334
4444
"""
def pattern19(n):
    for i in range(n):
        for j in range(n):
            if i==0 or j==0 or i==n-1 or j==n-1:
                print(f"{n}",end="")
            else:
                print(f"{n-1}",end="")
        print()
        
"""
Enter the number of lines: 3
1 1 1 1 1 
1 2 2 2 1 
1 2 3 2 1 
1 2 2 2 1 
1 1 1 1 1 
"""

def pattern20(n):
    for i in range(1,n+1):
        for j in range(1,n+1):
            print(min(i,j),end=" ")
        for j in range(n-1,0,-1):
            print(min(i,j),end=" ")
        print()
    for i in range(n-1,0,-1):
        for j in range(1,n+1):
            print(min(i,j),end=" ")
        for j in range(n-1,0,-1):
            print(min(i,j),end=" ")
        print()

n = int(input("Enter the number of lines: "))
pattern20(n)


