n=input()
def aa(n):
    c=0
    a=''
    if '_' in n:
        for i in n:
            if i=='_':
                c=1
                a+=i
            elif c==1:
                a+=i.lower()
                c=0
            else:
                a+=i
    else:
        a+=n[0]
        for i in n[1:]:
            if i.isupper():
                a+=('_'+i.lower())
            else:
                a+=i
    return a
def bb(n):
    c=0
    b=''
    if '_' in n:
        for i in n:
            if i=='_':
                c=1
                continue
            elif c==1:
                b+=i.upper()
                c=0
            else:
                b+=i
        return b
    else:
        return n
print(aa(n))
print(bb(n))