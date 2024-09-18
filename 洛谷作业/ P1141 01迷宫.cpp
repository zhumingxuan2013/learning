#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n,m,f[100001],ans[1001][1001];
char s[1001][1001];
void dfs(int x,int y,int p,int step){
	if (x<0||x>=n ||y<0||y>=n||ans[x][y]!=-1||s[x][y]-'0'!=p)return;
	ans[x][y]=step;
	f[step]++;
	dfs(x-1,y,!p,step);dfs(x+1,y,!p,step);dfs(x,y-1,!p,step);dfs(x,y+1,!p,step);
}
int main() {
	memset(ans,-1,sizeof(ans));
	cin>>n>>m;
	for (int i=0;i<n;i++)cin>>s[i];
	for (int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		x--;y--;
		if (ans[x][y]==-1)dfs(x,y,s[x][y]-'0',i);else f[i]=f[ans[x][y]];
	}
	for (int i=0;i<m;i++)cout<<f[i]<<"\n";
	return 0;
}