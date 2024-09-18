#include <bits/stdc++.h>
#define mid ((l+r)>>1)
#define ll long long
#define maxn 50010
using namespace std;
struct Edge{
	int to,next,val;
	Edge(int a=0,int b=0,int c=0){
		to=a,next=b,val=c;
	}
}l[maxn<<1];
int head[maxn],cnt,n,m;
vector<int> son[maxn];
ll f[maxn];
int subans[maxn];
void Add(int a,int b,int c){
	l[++cnt]=Edge(b,head[a],c);
	head[a]=cnt;
}
int check(int u,int pos,int tot,ll x){
	int res=0,l=0;
	for (register int r=tot-1;r;--r){
		r-=r==pos;
		while (l<r&&son[u][l]+son[u][r]<x) ++l;
		l+=l==pos;
		if (l>=r) break;
		++res;++l;
	}
	return res;
}
void dfs(int u,int fa,ll x){
	f[u]=subans[u]=0;
	son[u].clear();
	for (register int i=head[u];i;i=l[i].next){
		int v=l[i].to;
		if (v==fa) continue;
		dfs(v,u,x);
		f[v]+=l[i].val;
		if (f[v]>=x) subans[u]++;
		else son[u].push_back(f[v]);
	}
	int tot=son[u].size();
	sort(son[u].begin(),son[u].end());
	int l=0,r=tot,sub=0,res;
	for (register int r=tot-1;r;--r){
		while (l<r&&son[u][l]+son[u][r]<x) ++l;
		if (l>=r) break;
		++sub;++l;
	}
	subans[u]+=sub;
	if (sub*2==tot) return;
	l=0,r=tot-1;
	while(l<=r){
		int tem=check(u,mid,tot,x);
		if (tem==sub) res=mid,l=mid+1;
		else r=mid-1;
	}
	f[u]=son[u][res];
}
bool check(ll x){
	int tem=0;
	dfs(1,0,x);
	for (register int i=1;i<=n;++i)
		tem+=subans[i];
	return tem>=m;
}
int main(){
	ll l=0,r=0,ans,c;
	scanf("%d%d",&n,&m);
	for (register int i=1,a,b;i<n;++i)
		scanf("%d%d%lld",&a,&b,&c),
		Add(a,b,c),Add(b,a,c),r+=c;
	r/=(ll)m;
	while(l<=r){
		if (check(mid)) ans=mid,l=mid+1;
		else r=mid-1;
	}
	printf("%lld\n",ans);
	return 0;
}