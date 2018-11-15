#include<bits/stdc++.h>
using namespace std;
int fr=0;
int cp=1;
int p[1000000];
int f[1000000];
vector < int > ve;
int com[10000000];
class Graph
{
    public:
	int V;    
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);
    Graph(int V);   
    void addEdge(int v, int w);
    void connectedComponents();
};
void Graph::connectedComponents()
{
    bool *visited = new bool[V];
    for(int v = 0; v < V; v++)
        visited[v] = false;
    for (int v=0; v<V; v++)
    {
        if (visited[v] == false)
        {
            DFSUtil(v, visited);
       		ve.push_back(fr);
       		fr=0;
       		cp++;
	    }
    }
}
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    com[v]=cp;
    //cout << v << " ";
    fr++;
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if(!visited[*i])
        {
        	p[*i]=v;
            DFSUtil(*i, visited);
      	}
  	}
}
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
int main()
{
	int n,m,i;	cin>>n>>m;  
    Graph g(n); 
	vector < pair < int, int > > h;
    vector < pair < int, int > > :: iterator jt;
	for(i=0;i<m;i++)
    {
		int u,v;	cin>>u>>v;
		u--;
		v--;
		g.addEdge(u, v);
		h.push_back(make_pair(u,v));
 	}
    vector < int > :: iterator it;
    g.connectedComponents();
    long long int happiness=0;
    for(it=ve.begin();it!=ve.end();it++)
    	happiness+=(*it)*(*it - 1);
    for(i=0;i<n;i++)		f[com[i]]++;
    sort(f,f+n);
    int ft;
	for(ft=0;ft<n;ft++)		if(f[ft]!=0)	break;
    int temp=0;
	for(jt=h.begin();jt!=h.end();jt++)
    {
    	if(p[jt->first]==p[jt->second])
    	{
    		temp++;
    	}
    }
    if(temp==2)
	{
		cout<<happiness<<endl;	
	}
	else if(temp==1)
	{
		//cout<<happiness<<" "<<f[ft]<<endl;
		happiness-=(f[ft]*(f[ft]-1));
		f[ft]--;
		//cout<<happiness<<endl;	
		happiness+=(f[ft]*(f[ft]-1));
		sort(f+ft,f+n);
		cout<<happiness<<endl;	
	}
	else
	{
		happiness-=(f[ft]*f[ft]-1);
		f[ft]--;
		happiness+=(f[ft]*f[ft]-1);
		sort(f+ft,f+n);
		if(f[ft]==0)	ft++;
		happiness-=(f[ft]*f[ft]-1);
		f[ft]--;
		happiness+=(f[ft]*f[ft]-1);
		sort(f+ft,f+n);
		cout<<happiness<<endl;	
	}
	return 0;
}
