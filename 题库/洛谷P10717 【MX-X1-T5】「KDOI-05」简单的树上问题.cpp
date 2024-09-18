#include<bits/stdc++.h>
using namespace std;
struct edge{int v,nxt;}e[205];
int n,m,u,v,cnt,h[105],w[105][256],p[105][8],dp[105][1<<16],num,tmp[1<<16];
void add(int u,int v){e[++cnt]={v,h[u]};h[u]=cnt;}
const int mod=998244353;
void Add(int &x,int y){x=(x+y>=mod?x+y-mod:x+y);}
struct node{int x,y,z;}go[2000005];
void init(int k,int x,int y,int z)
{
	if(k==m){go[++num]={x,y,z};return;}
	init(k+1,x,y,z);
	init(k+1,x,y|(1<<(k<<1)),z|(1<<(k<<1)));
	init(k+1,x|(1<<(k<<1)),y,z|(1<<(k<<1)));
	init(k+1,x|(2<<(k<<1)),y,z|(2<<(k<<1)));
	init(k+1,x,y|(2<<(k<<1)),z|(2<<(k<<1)));
	init(k+1,x|(3<<(k<<1)),y|(3<<(k<<1)),z|(3<<(k<<1)));
}
void fwt(int *a)
{
	for(int i=0;i<m;i++)
	{
		for(int s=0;s<(1<<(m<<1));s++)
		{
			int c=(s>>(i<<1))&3;
			if(c==0)Add(a[s+(3<<(i<<1))],a[s]);
			else if(c==1)Add(a[s+(2<<(i<<1))],a[s]); 
		}
	}
}
void ifwt(int *a)
{
	for(int i=0;i<m;i++)
	{
		for(int s=0;s<(1<<(m<<1));s++)
		{
			int c=(s>>(i<<1))&3;
			if(c==3)Add(a[s],mod-a[s-(3<<(i<<1))]),Add(a[s],mod-a[s-(2<<(i<<1))]);
		}
	}
}
void dfs(int u,int fa)
{
	dp[u][0]=1;
	for(int i=h[u];i;i=e[i].nxt)
	{
		int v=e[i].v;
		if(v==fa)continue;
		dfs(v,u);
		for(int s=0;s<(1<<(m<<1));s++)tmp[s]=dp[u][s],dp[u][s]=0;
		fwt(tmp);fwt(dp[v]);
		for(int s=1;s<=num;s++)Add(dp[u][go[s].z],1ll*tmp[go[s].x]*dp[v][go[s].y]%mod);
		ifwt(dp[u]);
	}
	for(int i=0;i<m;i++)
	{
		for(int s=0;s<(1<<(m<<1));s++)tmp[s]=dp[u][s],dp[u][s]=0;
		for(int s=0;s<(1<<(m<<1));s++)
		{
			int c=(s>>(i<<1))&3;
			if(c==0)
			{
				Add(dp[u][s],1ll*tmp[s]*(mod+1-p[u][i])%mod);
				Add(dp[u][s|(3<<(i<<1))],1ll*tmp[s]*p[u][i]%mod);
			}
			else if(c==1)
			{
				Add(dp[u][s],1ll*tmp[s]*(mod+1-p[u][i])%mod);
				Add(dp[u][s|(2<<(i<<1))],1ll*tmp[s]*p[u][i]%mod);
			}
			else if(c==2)
			{
				Add(dp[u][s],1ll*tmp[s]*(mod+1-p[u][i])%mod);
			}
			else 
			{
				Add(dp[u][s],tmp[s]);
			}
		}
	}
	for(int s=0;s<(1<<(m<<1));s++)
	{
		int ns=0;
		for(int i=0;i<m;i++)if((s>>(i<<1))&1)ns|=(1<<i);
		dp[u][s]=1ll*dp[u][s]*w[u][ns]%mod;
	}
	for(int i=0;i<m;i++)
	{
		for(int s=0;s<(1<<(m<<1));s++)tmp[s]=dp[u][s],dp[u][s]=0;
		for(int s=0;s<(1<<(m<<1));s++)
		{
			if(((s>>(i<<1))&3)==3)
			{
				Add(dp[u][s-(1<<(i<<1))],tmp[s]);
				Add(dp[u][s-(2<<(i<<1))],tmp[s]); 
			}
			else Add(dp[u][s],tmp[s]);
		}
	}
}
int main()
{
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<n;i++)
	{
		cin>>u>>v;
		add(u,v);add(v,u);
	}
	for(int i=0;i<m;i++)for(int j=1;j<=n;j++)cin>>p[j][i];
	for(int i=1;i<=n;i++)
	{
		for(int s=0;s<(1<<m);s++)cin>>w[i][s];
	}
	init(0,0,0,0);dfs(1,0);
	int ans=0;
	for(int s=0;s<(1<<(m<<1));s++)
	{
		int flag=1;
		for(int i=0;i<m;i++)flag&=(((s>>(i<<1))&3)!=1);
		if(flag)Add(ans,dp[1][s]);
	}
	cout<<ans;
	return 0;
}