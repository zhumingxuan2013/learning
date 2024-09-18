#include<iostream>
#include<cassert>
#include<vector>
using namespace std;
typedef vector<int> VI; 
typedef long long ll;
typedef pair<int,int> PII;
const ll mod=1000000007;
ll powmod(ll a,ll b) 
{
	ll res=1;
	a%=mod;
	for(;b;b>>=1)
	{
		if(b&1)  
			res=res*a%mod;
		a=a*a%mod; 
	}
	return res;
}
const int N=1000;
int sz[N+10],d[N+10],dis[N+10],q[N+10],cnt[N+10],com,u,v,tc;
vector<int> e[N+10];
double c0;
void dfs2(int u,int f) 
{
	sz[u]=1;
	for(register int i=0;i<(int)(e[u].size());++i) 
	{
		int v=e[u][i];
		if(v==f) 
			continue;
		dfs2(v,u); 
		sz[u]+=sz[v];
	}
	if(sz[u]<N) 
		c0+=log(sz[u])+log(N-sz[u]);
}
int id;
int sep23(int c1,int c2)
{
	if(c1<=23) 
		return 2;
	if(c1>=27)
		 return 3;
	if(c1==24) 
	{
		if(c2>=3)
			 return 2; 
		else 
			return 3;
	}
	if(c1==25) {
		if(c2>=6) 
			return 2; 
		else 
			return 3;
	}
	if(c1==26) {
		if(c2>=9) 
			return 2; 
		else
			return 3;
	}
	return 0;
}
int check()
{
	c0=0;
	dfs2(1,0);
	for(register int i=1;i<N+1;++i)
		d[i]=(int)(e[i].size());
	int t=0;
	memset(dis,0,sizeof(dis));
	memset(cnt,0,sizeof(cnt));
	for(register int i=1;i<N+1;++i)
		if (d[i]==1)
		{
			q[t++]=i;
			cnt[dis[i]=1]++;
		}
	for(register int i=0;i<t;++i)
		for(register int j=0;j<(int)(e[q[i]].size());++j)
		{
			int v=e[q[i]][j];
			if((--d[v])==1) 
			{
				q[t++]=v;
				dis[v]=dis[q[i]]+1; 
				cnt[dis[v]]++;
			}
		}
	int c1=*max_element(dis+1,dis+N+1);
	int c2=0; 
	for(register int i=1;i<=c1;++i)
		c2+=(cnt[i]<=2); 
    
	if (c0<=7800) 
		return 1;
     
	if (id==1) 
		return 2;		
	if (id==2) 
		return sep23(c1,c2);
	if (id==3) 
	{
		if (c0>=8178) 
			return 4;
		if (c0>=8155)
		{
			if (c1<38)
				return 4;
			else
				return 3;
		}
		return 3;
	}
	if (id==4||id==5) 
	{ 
		if (c0>=8178) 
			return 4;
		if (c0>=8155) 
		{
			if (c1<38) 
				return 4;
			else 
				return 3;
		}
		return sep23(c1,c2);
	}
	return 0;
}
int main()
{
	scanf("%d",&id); 
	for(scanf("%d",&com);com;--com)
	{
		for(register int i=1;i<=N;++i) 
			e[i].clear();
		for(register int i=1;i<N;++i)
		{
			scanf("%d%d",&u,&v);
			e[u].push_back(v);
			e[v].push_back(u);
		}
		printf("%d\n",check());
	}
}