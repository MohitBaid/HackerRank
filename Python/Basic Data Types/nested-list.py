from operator import itemgetter
L=[]
s=set([])
for _ in range (0,int(input())):
	str=input()
	mark=float(input())
	s.add(mark)
	f=[str,mark]
	L.append(f)
L.sort(key=itemgetter(0))
L.sort(key=itemgetter(1))
s=list(s)
s.sort()
for i in range(0,len(L)):
	if s[1]==L[i][1]:
		print(L[i][0])