#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n,k,i;	cin>>n>>m>>k;
	long long int A[n],sum=0;
	long long int B[n],bp=0;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		sum+=A[i];
	}
	for(i=0;i<n;i++)	if(A[i]==1)		B[bp++]=i;
	if(sum<m)			printf("-1\n");
	else if(sum==m)
	{
		long long int c=1;
		long long int ans=B[0];
		for(i=1;i<bp;i++)
		{
			ans+=(B[i]-B[i-1])*(c*k);
		}
		cout<<ans<<endl;
	}
	else
	{
		long long int ans=-1,temp=0,c,j;
		long long int C[bp],D[bp],dp=1;
		for(i=0;i<bp;i++)
			C[i]=k*B[i],D[i]=0;
		for(i=0;i<m;i++)
			D[0]+=C[i];
		for(i=m;i<bp-m;i++)	
			D[dp++]+=(C[i]-C[i-m]);
		for(i=0;i<dp;i++)
		{
			temp=m-1-D[i]+(m-1)*C[m-1+i];
			if(ans==-1)		ans=temp;
			if(ans<temp)
				ans=temp;
		}		
        cout<<ans<<endl;
	}	
}
