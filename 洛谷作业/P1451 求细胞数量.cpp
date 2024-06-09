#include <iostream>
using namespace std;
int n,m,xibao[101][101],dx[4]={0,0,-1,1},
dy[4]={-1,1,0,0},cnt;
void dfs(int x,int y){
	xibao[x][y]=0;
	for (int i=0; i<4; i++) {
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx<0||tx>=n||ty<0||ty>=m||xibao[tx][ty]==0){
			continue;
		}else {
			dfs(tx, ty);
		}
	}
	return ;
}
int main() {
	cin>>n>>m;
	for (int i=0;i<n;i++) 
		for (int j=0; j<m; j++) 
		    scanf("%1d",&xibao[i][j]);
		
	for (int i=0;i<n;i++) 
		for (int j=0; j<m; j++) 
			if (xibao[i][j]!=0){
				cnt++;
				dfs(i, j);
			}
	cout<<cnt;
	return 0;
}