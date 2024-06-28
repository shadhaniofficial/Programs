a=input()
b=input()
if a==b:
    print(a,'is equal to',a)
else:
    for i in range(len(a)):
        if a[i]==b[i]:
            continue
        elif ord(a[i])<ord(b[i]):
            print(a,'is lexicographically smaller than',b)
        else:
            print(a,'is lexicographically bigger than',b)
            