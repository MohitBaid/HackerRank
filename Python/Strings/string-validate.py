str=input()
flag=0
if str.isalnum() or str.isalpha() or str.isdigit() or str.islower() or str.isupper():
	print("True")
	flag=1
else:
	print("False")
flag1=0
flag2=0
if not str.isdigit() and flag:
	print("True")
	flag1=1
else:
	print("False")
if not str.isalpha() and flag:
	print("True")
	flag2=1
else:
	print("False") 
if flag1 and not str.isupper():
	print("True")
else:
	print("False")
if flag2 and not str.islower():
	print("True")
else:
	print("False")