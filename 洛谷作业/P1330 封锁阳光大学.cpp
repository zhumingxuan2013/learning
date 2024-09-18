#include <iostream>
using namespace std;
int n,m,c;
struct node{
	int d,next;
}ans[200000];
bool flag[200000];//存没存过
int head[200000],color[200000]/*染色*/,black,white,cnt;
void add(int x,int y){
	c++;
	ans[c].d=y;
	ans[c].next=head[x];
	head[x]=c;
}
bool dfs(int n,int color1){
	if (flag[n]) {	//this specical check is for below code
		if (color1==color[n]) {	// if color is same , then return true else return false
			return true;
		}
		return false;
	}
	flag[n]=true;	//log the node which has been check
	if (color1) {
		black++;
	}else {
		white++;
	}
	color[n]=color1;
	bool f=true;
	for(int i=head[n];i!=0&&f;i=ans[i].next){
		f=f&&dfs(ans[i].d, 1-color1);
	}
	return f;
}
int main() {
	cin>>n>>m;
	for (int i=1; i<=m; i++){
		int x,y;
		cin>>x>>y;
		add(x, y);
		add(y, x);
	}
	for (int i=1; i<=n; i++) {
		if (flag[i]) {
			continue;
		}
		black=white=0;
		if (!dfs(i, 0)) {
			cout<<"Impossible";
			exit(0);
		}
		cnt+=min(black, white);
	}
	cout<<cnt;
	return 0;
}