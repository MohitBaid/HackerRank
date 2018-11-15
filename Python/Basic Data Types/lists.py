L=[]
for _ in range(int(input())):
	str=input().split()
	if "insert" in str[0]:
		L.insert(int(str[1]),int(str[2]))
	elif "append" in str[0]:
		L.append(int(str[1]))
	elif "remove" in str[0]:
		L.remove(int(str[1]))
	elif "pop" in str[0]:
		L.pop()
	elif "reverse" in str[0]:
		L.reverse()
	elif "sort" in str[0]:
		L.sort()
	else:
		print(L)
