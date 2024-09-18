#include <iostream>
#include <queue>
#include <string.h>
#define f1n for(int i=1;i<n;i++)
#define f2n for(int i=1;i<=n;i++)
using namespace std;
struct node{
	int l,r,f,d;
}v[101];
 struct node2 {
	int step,pos;
};
int maxn,w[101],o,p[101];
void dfs(int step){
	if (!p[step]) {
		p[step]++;
		maxn=max(maxn, v[step].d);
		w[v[step].d]++;
		if (v[step].l) {
			v[v[step].l].d=v[step].d+1;
			dfs(v[step].l);
		}
		if (v[step].r) {
			v[v[step].r].d=v[step].d+1;
			dfs(v[step].r);
		}
		
	}
	return;   
} 
int main() {  
	int n,m,z,x,y;
	cin>>n;
	f1n{
		cin>>m>>z;
		if (!v[m].l) {
			v[m].l=z;
		}else {
			v[m].r=z;
		}
		v[z].f=m;
	}
	cin>>x>>y;
	v[1].d=1;
	dfs(1);
	f2n  o=max(o, w[i]);
	cout<<maxn<<"\n"<<o<<"\n";
	node2 temp={x,0};
	memset(p, 0, sizeof(p));
	queue<node2>q;
	p[x]=1;
	q.push(temp); 
	while (!q.empty()) {
		temp=q.front();
		q.pop();
		if (temp.step==y) {
			cout<<temp.pos;
			break;
		}
		int l=v[temp.step].l,r=v[temp.step].r,f=v[temp.step].f,step=temp.pos;
		if (l&&!p[l]) {
			p[l]=1;
			q.push({l,step+1});
		}
		if (r&&!p[r]) {
			p[r]=1;
			q.push({r,step+1});
		}
		if (f&&!p[f]) {
			p[f]=1;
			q.push({f,step+2});
		}
	}
	return 0;
}
