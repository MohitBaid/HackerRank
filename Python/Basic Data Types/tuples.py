n=int(input())
t=()
str=list(map(int,input().split()))
for i in range(0,n):
	t=t+(int(str[i]),)
print(hash(t))