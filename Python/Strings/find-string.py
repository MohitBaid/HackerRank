def count_substring(string,sub_string):
	result=0
	for i in range(0,len(string)):
		if string[i:i+len(sub_string)] == sub_string:
			result+=1
	return result
string=input()
sub_string=input()
print(count_substring(string,sub_string))