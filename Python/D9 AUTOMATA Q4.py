# You are using Python
num = int(input())
ctr = 0
for i in range (2,(int)(num/2)+1):
    temp1 = i
    temp2 = num-i
   #type the missing code
    if(ctr==0):
        for j in range (2,(int)((num-i)/2)+1):
            if((num-i)%j==0):
                ctr += 1
                break
        if(ctr==0):
            print(i,"+",num-i)
    ctr = 0
    