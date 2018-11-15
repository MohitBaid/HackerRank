L=[]
for _ in range(0,int(input())):
	str=list(input().split())
	L.append(str)
str=input()
for i in range(0,len(L)):
	if str==L[i][0]:
		num=float(L[i][1])+float(L[i][2])+float(L[i][3])
		num=num/3
		num=format(num,'.2f')
		print(num)