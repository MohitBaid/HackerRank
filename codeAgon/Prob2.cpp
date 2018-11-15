#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;	cin>>s;
	int k,i;		cin>>k;
	int A[26]={0},B[26]={0};
	for(i=0;s[i]!='\0';i++)
		A[s[i]-'a']++;
	for(i=0;i<26;i++)
	{
		if(A[i]>=k)
			B[i]=1;
	}	
	for(i=0;s[i]!='\0';i++)
	{
		if(B[s[i]-'a']==1)
		{
			cout<<s[i];
		}
	}
	cout<<endl;
}
