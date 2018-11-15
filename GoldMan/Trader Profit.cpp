#include<bits/stdc++.h>
using namespace std;
int maxprofit(int A[],int k1,int n)
{
	int B[100][102]={0},i,j,k;
	for(i=1;i<=k1;i++)
		for(j=1;j<n;j++)
		{
			int temp=-1;
			for(k=0;k<j;k++)
				temp=max(temp,A[j]-A[k]+B[i-1][k]);
			B[i][j]=max(B[i][j-1],temp);	
		}
	return B[k1][n-1];	
}
int main()
{
	int T;	cin>>T;
	while(T--)
	{
		int k;	cin>>k;
		int n,i;	cin>>n;
		int A[n];
		for(i=0;i<n;i++)		cin>>A[i];
		cout<<maxprofit(A,k,n)<<endl;
	}
}
