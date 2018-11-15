#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;	cin>>q;
	while(q--)
	{
		int n,i;	cin>>n;
		int A[n],B[n+2],C[n];
		bool flag=true;
		for(i=0;i<n+2;i++)	B[i]=0;
		for(i=0;i<n;i++)
		{
			cin>>A[i];
			C[i]=A[i];
			if(A[i]<=n && A[i]!=0)
			{
				if(B[A[i]]==0)			B[A[i]]++;
				else					flag=false;
			}
			else		flag=false;		
		}
		sort(C,C+n);
		bool flag2=false;
		for(i=0;i<n;i++)
			if(C[i]!=A[i])
			{
				flag2=true;
				break;
			}	
		if(flag && flag2)	cout<<"Beautiful\n";
		else				cout<<"Ugly\n";	
	}
}
