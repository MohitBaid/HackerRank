#include<bits/stdc++.h>
using namespace std;
int s1[1000001]={0},s2[1000001]={0},c1[1000001]={0},c2[1000001]={0};
int main()
{
	int n,i,j,ans=0;	scanf("%d",&n);
	int A[n],B[n];
	for(i=0;i<n;i++)	scanf("%d",&A[i]);			sort(A,A+n);
	for(i=0;i<n;i++)	scanf("%d",&B[i]);			sort(B,B+n);
	for(i=n-1;i>=0;i--)
	{
		if(s1[A[i]]==0)
			for(j=1;j*j<=A[i];j++)
				if(A[i]%j==0)
				{
					s1[j]=1;
					s1[A[i]/j]=1;
				}
	}
	for(i=n-1;i>=0;i--)
	{
		if(s2[B[i]]==0)
			for(j=1;j*j<=B[i];j++)
				if(B[i]%j==0)
				{
					s2[j]=1;
					s2[B[i]/j]=1;
				}
	}
	for(i=1000000;i>=0;i--)
	{
		if(s1[i]==s2[i] && s1[i]==1)
			break;
	}
	int gcd=i;
	for(i=n-1;i>=0;i--)
		if(A[i]%gcd==0)
			break;
	ans+=A[i];
	for(i=n-1;i>=0;i--)
		if(B[i]%gcd==0)
			break;
	ans+=B[i];
	printf("%d\n",ans);				
}
