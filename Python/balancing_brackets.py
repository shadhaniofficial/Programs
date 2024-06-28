s = input()

eb = (')', ']', '}')

if (s[0] in eb) or (len(s)%2==1):
    print("Not Valid")
    exit()

ob = ('(', '[', '{')

stack = ''

for i in s: 

    if i in ob:
        stack += i
        continue
        
    if not(ob.index(stack[-1]) == eb.index(i)):
        print("Not Valid")
        exit()
        continue
        
    stack = stack[0:-1]

print("Valid")
