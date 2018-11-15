#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Q;	cin>>Q;
	while(Q--)
	{
		long long int n,k,x,d;	cin>>n>>k>>x>>d;
		double f=0.0;
		while(n--)
		{
			long long int temp;	cin>>temp;
			temp=temp*x;
			double fee=temp*1.0/100;
			if(fee<k)		fee=k;
			f+=fee;
			//cout<<fee<<endl;
		}
		if(f<=d)		cout<<"fee"<<endl;
		else		cout<<"upfront"<<endl;
	}
}
