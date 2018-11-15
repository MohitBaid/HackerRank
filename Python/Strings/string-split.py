def split_and_join(line):
	str=line.split()
	str="-".join(str)
	return str
line=input()
line=split_and_join(line)
print(line)