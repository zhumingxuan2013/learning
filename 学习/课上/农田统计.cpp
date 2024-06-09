#include <iostream>
using namespace std;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
int n,m,cnt;
char a[100][100];
void dfs(int x,int y){
	a[x][y]='X';
	for (int i=0; i<4; i++) {
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx<0||tx>=n||ty<0||ty>=m||a[tx][ty]=='X'){
			continue;
		}else {
			dfs(tx, ty);
		}
	}
}
int main() {
	cin>>n>>m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin>>a[i][j];
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (a[i][j]=='R') {
				cnt++;
				dfs(i,j);
			}
		}
	}
	cout<<cnt;
	return 0;
}