#include <iostream>
#include <cstring>
using namespace std;
int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};
int n,m,s[16][16],q[17][17],xa,xb,ya,yb,f;
void dfs(int x,int y,string step){
	step+="("+to_string(x)+","+to_string(y)+")";
	if (x==xb&&y==yb) {
		f=1;
		for(int i=0;i<step.size();i++)
			if(step[i]>='0'&&step[i]<='9')cout<<step[i]-'0';
			else cout<<step[i];
		cout<<endl;
		return;
	}
	step+="->";
	for (int i=0; i<4; i++) {
		int nx=x+dx[i],ny=y+dy[i];

		if(nx>0&&nx<=n&&ny>0&&ny<=m&&q[nx][ny]==0&&s[nx][ny]==1){

			q[nx][ny]=1;
			dfs(nx, ny, step);
			q[nx][ny]=0;

		}

	}
}
int main() {
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			cin>>s[i][j];
		}
	}
	cin>>xa>>ya>>xb>>yb;
	q[xa][ya]=1;
	dfs(xa,ya,"");

	if (!f) {
		cout<<-1;
	}
	return 0;
}