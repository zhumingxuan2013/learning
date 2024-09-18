#include<iostream>
using namespace std;
string s;
int ans,n;
int c(int m,int n)
{
	if(m==0)return 1;
	int mu=1;
	for(int i=n;i>n-m;i--)mu*=i;
	for(int i=m;i>1;i--)mu/=i;
	return mu;
}
int main()
{
	cin>>s,n=s.size();
	for(int i=1;i<n;i++)
		if(s[i]<=s[i-1])cout<<0,exit(0);
	for(int i=1;i<n;i++)ans+=c(i,26);
	for(int i=0;i<n;i++)
		for(char j=(i==0?'a':s[i-1]+1);j<s[i];j++)
			ans+=c(n-i-1,'z'-j);
	cout<<++ans;
	return 0;
}