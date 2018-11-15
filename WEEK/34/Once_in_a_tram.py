n=int(input())
while 1:
	n=n+1
	f=n%10 + (n//10)%10 + (n//100)%10
	g=(n//1000)%10 + (n//10000)%10 + (n//100000)%10
	if f==g:
		break
print(n)