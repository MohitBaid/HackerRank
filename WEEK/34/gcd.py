import math
n=int(input())
A=list(map(int,input().split()))
B=list(map(int,input().split()))
A.sort()
B.sort()
s1=[]
s2=[]
for a in A:
	for j in range(1,int(math.sqrt(a))+1):
		if a%j==0:
			s1.append(j)
			s1.append(a//j)
for b in B:
	for j in range(1,int(math.sqrt(b))+1):
		if b%j==0:
			s2.append(j)
			s2.append(b//j)
s1=list(set(s1))
s2=list(set(s2))
s1.sort()
s2.sort()
l1=len(s1)-1
l2=len(s2)-1
while 1:
	if s1[l1]==s2[l2]:
		break;
	if s1[l1]>s2[l2]:
		l1=l1-1
	else:
		l2=l2-1
temp=s1[l1]
l1=len(A)-1
while 1:
	if A[l1]%temp==0:
		break
	l1=l1-1
ans=A[l1]
l1=len(B)-1
while 1:
	if B[l1]%temp==0:
		break
	l1=l1-1
ans+=B[l1]
print(ans)