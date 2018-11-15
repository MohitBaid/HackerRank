n=int(input())
if n%2==1:
	print("Weird")
else:
	if n>=2 and n<=5:
		print("Not Weird")
	elif n>20:
		print("Not Weird")
	else:
		print("Weird")