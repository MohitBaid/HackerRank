def mutate_string(string,p,c):
	string=string[:p]+c+string[p+1:]
	return string
string=input()
str=input()
string=mutate_string(string,int(str[0]),str[2])
print(string)