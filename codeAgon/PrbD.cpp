#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin>>t;
	while(t--)
	{
		int n,e,i;	cin>>n;
		e=n-1;
		vector < pair < pair<int,int> ,int > > adj;
		set < int > s ;
		for(i=0;i<e;i++)
		{
			int u,v,g;	cin>>u>>v>>g;
			adj.push_back(make_pair(make_pair(u,v),g));
			if(g==1)
			{
				s.insert(u);
				s.insert(v);
			}
		}
		vector < pair < pair<int,int> ,int > >:: iterator it;
		for(it=adj.begin();it!=adj.end();it++)
		{
			int u=it->first.first;
			int v=it->first.second;
			int g=it->second;
			if(s.find(u)!=s.end())
				s.insert(v);
			if(s.find(v)!=s.end())
				s.insert(u);	
		}
		cout<<n-s.size()+1<<endl;
	}
}
