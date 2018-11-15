#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,temp;	cin>>n;
	priority_queue< pair< int,int > >pq;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		pq.push(make_pair(temp,1));
	}
	for(i=0;i<n;i++)
	{
		cin>>temp;
		pq.push(make_pair(temp,2));
	}
	for(i=0;i<n;i++)
	{
		int f=(pq.top()).first;
	}
}
