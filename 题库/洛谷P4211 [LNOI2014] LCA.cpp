#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1 
using namespace std;

const int MAXN = 50005;
const int MOD = 201314;

struct Que {
	int ans1,ans2; 	Que() {ans1=ans2=0;}
}que[MAXN];
struct Que_part { 
	int num,pos,z;
	bool flag; 
	Que_part() {num=pos=z=flag=0;} 
	Que_part(int a,int b,int c,bool d) {
		num=a; pos=b; z=c; flag=d;
	}
	
	inline bool operator < (const Que_part &a) const {
		return this->pos<a.pos;
	}
}que_p[MAXN<<1]; 

inline bool operator > (const Que_part &a,const Que_part &b) { 
	return a.pos>b.pos;
}

int n,q; 
int nex[MAXN],to[MAXN],en[MAXN]; 
int size[MAXN],fa[MAXN],dep[MAXN],son[MAXN];
int top[MAXN],seq[MAXN],dfn[MAXN]; 
int sum[MAXN<<2],col[MAXN<<2],nowl,nowr;


void update(int rt)
{
	sum[rt]=(sum[rt<<1]+sum[rt<<1|1]) %MOD;
}
void color(int l,int r,int rt,int co)
{
	sum[rt]=(sum[rt]+(r-l+1)*co) %MOD;
	if(l<r) col[rt]=(col[rt]+co) %MOD;
}
void push_col(int l,int r,int rt)
{
	if(col[rt] && l<r) {
		int mid=(l+r)>>1;
		color(lson,col[rt]);
		color(rson,col[rt]);
	}
	col[rt]=0;
}
int query(int l,int r,int rt)
{
	if(nowl<=l && r<=nowr) return sum[rt];
	push_col(l,r,rt);
	int mid=(l+r)>>1,ans=0;
	if(nowl<=mid) ans+=query(lson);
	if(mid<nowr ) ans+=query(rson);
	return ans %MOD;
}
void modify(int l,int r,int rt)
{
	if(nowl<=l && r<=nowr) {
		color(l,r,rt,1);
		return ;
	}
	push_col(l,r,rt);
	int mid=(l+r)>>1;
	if(nowl<=mid) modify(lson);
	if(mid<nowr ) modify(rson);
	update(rt); 
}

void dfs1(int x)
{
	size[x]=1;
	for(int p=en[x];p;p=nex[p]) {
		if(to[p]!=fa[x]) { 
			dep[to[p]]=dep[x]+1;
			dfs1(to[p]);
			if(size[son[x]]<size[to[p]]) son[x]=to[p];
			size[x]+=size[to[p]];
		}
	}
}
void dfs2(int x,int anc)
{
	static int t=0;
	top[x]=anc;
	seq[x]=++t;
	dfn[t]=x;
	if(!son[x]) return ;
	dfs2(son[x],anc);
	for(int p=en[x];p;p=nex[p]) {
		if(to[p]!=fa[x] && to[p]!=son[x])
			dfs2(to[p],to[p]);
	}
}
int query_chain(int x,int y)
{
	int tx=top[x],ty=top[y],ans=0;
	while(tx!=ty) {
		if(dep[tx]<dep[ty]) {
			x^=y^=x^=y;
			tx^=ty^=tx^=ty;
		}
		nowl=seq[tx];nowr=seq[x];
		ans+=query(1,n,1);
		x=fa[tx];
		tx=top[x];
	}
	if(dep[x]>dep[y]) x^=y^=x^=y;
	nowl=seq[x];nowr=seq[y];
	ans+=query(1,n,1);
	return ans %MOD;
}
void modify_chain(int x,int y)
{
	int tx=top[x],ty=top[y];
	while(tx!=ty) {
		if(dep[tx]<dep[ty]) {
			x^=y^=x^=y;
			tx^=ty^=tx^=ty; 
		}
		nowl=seq[tx];nowr=seq[x];
		modify(1,n,1);
		x=fa[tx];
		tx=top[x];
	}
	if(dep[x]>dep[y]) x^=y^=x^=y;
	nowl=seq[x];nowr=seq[y];
	modify(1,n,1);
}

int main()
{
	int l,r,z,cnt=0,now=0; 
	scanf("%d %d",&n,&q);
	for(int i=2;i<=n;++i) { 
		scanf("%d",&z);
		nex[++cnt]=en[fa[i]=++z];to[cnt]=i;en[z]=cnt;	}
	cnt=0; 
	for(int i=1;i<=q;++i) {
		scanf("%d %d %d",&l,&r,&z);
		++r;++z; 
		que_p[++cnt]=Que_part(i,l,z,0);
		que_p[++cnt]=Que_part(i,r,z,1);
	}
	
	dep[1]=1;
	dfs1(1);
	dfs2(1,1);
		
	sort(que_p+1,que_p+cnt+1);
	
	for(int i=1;i<=cnt;++i) {
		while(now<que_p[i].pos) {			modify_chain(1,++now);
		}
		
		l=que_p[i].num; 
		if(que_p[i].flag) que[l].ans1=query_chain(1,que_p[i].z); 		else que[l].ans2=query_chain(1,que_p[i].z); 
	}
	
	for(int i=1;i<=q;++i) {
		printf("%d\n",(que[i].ans1-que[i].ans2+MOD) %MOD); 
	}
	return 0;
}