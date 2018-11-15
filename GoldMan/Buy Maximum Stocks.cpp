#include<bits/stdc++.h>
using namespace std;
struct st
{
	long long int k;
	long long int i;
};
int compare (const void * a, const void * b)
{

  st *A = (st *)a;
  st *B = (st *)b;

  return (A->k - B->k );
}

int main()
{
	long long int n,i;	cin>>n;
	st A[n];
	long long int k,ans=0;
	for(i=0;i<n;i++)
	{
		cin>>A[i].k;
		A[i].i=i+1;
	}
	cin>>k;
	qsort(A,n,sizeof(st),compare);
	for(i=0;i<n;i++)
	{
		if(A[i].k*A[i].i<=k)
		{
			ans+=A[i].i;
			k-=A[i].k*A[i].i;
		}
		else break;
	}
	long long int temp=k/A[i].k;
	ans+=temp;
	cout<<ans<<endl;
}
