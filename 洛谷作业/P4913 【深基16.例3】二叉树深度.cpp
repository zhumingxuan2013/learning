#include <iostream>
using namespace std;
struct node{
	int l,r;
}v[1000001];
int maxn=0;
void dfs(int step,int a){
	maxn=max(maxn, step);
	if (v[a].l) {
		dfs(step+1,v[a].l);
	}
	if (v[a].r) {
		dfs(step+1,v[a].r);
	}
	return;   
} 
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i].l>>v[i].r;
	}
	dfs(1,1);
	cout<<maxn;
	return 0;
}