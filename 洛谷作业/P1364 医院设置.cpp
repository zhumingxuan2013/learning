#include <iostream>

using namespace std;
struct node{
	int l,r,f,d;
}ans[101];
int n,sum,minn=INT_MAX,v[101];
void dfs(int step,int x){
	sum+=step*ans[x].d;
	int fu=ans[x].f,l=ans[x].l,r=ans[x].r;
	if (fu&&!v[fu]) {
		v[fu]=1;
		dfs(step+1, fu);
	}
	if (l&&!v[l]) {
		v[l]=1;
		dfs(step+1, l);
	}
	if (r&&!v[r]) {
		v[r]=1;
		dfs(step+1, r);
	}
}
int main() {
	int n;
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>ans[i].d>>ans[i].l>>ans[i].r;
		ans[ans[i].l].f=i;
		ans[ans[i].r].f=i;
	}
	for (int i=1; i<=n; i++) {
		sum=0;
		memset(v, 0, sizeof(v));
		v[i]=1;
		dfs(0,i);
		minn=min(minn, sum);
	}
	cout<<minn;
	return 0;
}