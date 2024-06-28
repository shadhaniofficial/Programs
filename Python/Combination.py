def  combination(arr):
    result = []
    length = len(arr)
    for i in range(1,2**length):
        temp = i
        j = 0
        r = []
        while (temp>0):
            if (temp%2==1):
                r.append(arr[j])
            j += 1
            temp //= 2
        result.append(r)
    return result
    
    
arr = [1,2,3,4]
print(combination(arr))

def  combination(string):
    result = []
    length = len(string)
    for i in range(1,2**length):
        temp = i
        j = 0
        r = ''
        while (temp>0):
            if (temp%2==1):
                r += string[j]
            j += 1
            temp //= 2
        result.append(r)
    return result
    
    
s = "abcde"
print(combination(s))

