s = input()
_list = s.split()

if _list[1] == '+':
	t = int(_list[0]) + int(_list[2])
	print(s + ' = ' + str(t))

elif _list[1] == '-':
	t = int(_list[0]) - int(_list[2])
	print(s + ' = ' + str(t))

elif _list[1] == '*':
	t = int(_list[0]) * int(_list[2])
	print(s + ' = ' + str(t))

elif _list[1] == '/':
	t = int(_list[0]) / int(_list[2])
	print(s + ' = ' + str(t))

elif _list[1] == '%':
	t = int(_list[0]) % int(_list[2])
	print(s + ' = ' + str(t))

elif _list[1] == '**':
	t = int(_list[0]) ** int(_list[2])
	print(s + ' = ' + str(t))
	
else:
    print("Invalid Option")
