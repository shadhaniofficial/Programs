def add(a,b):
    s=a+b
    return s
def sub(a,b):
    d=a-b
    return d
def mul(a,b):
    p=a*b
    return p
def div(a,b):
    d=[a/b,a//b,a%b]
    return d
x=int(input())
y=int(input())
print(add(x,y))
print(sub(x,y))
print(mul(x,y))
print(div(x,y))

