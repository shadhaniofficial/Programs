words=[]
n=int(input())
for i in range(n):
    a=input()
    if  '42' in a and not(a[0]=='4' or a[-1]=='2'):
        words.append(a)
print(words)
        
