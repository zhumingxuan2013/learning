#include <iostream>
#include <queue>
using namespace std;
int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};
int n,m,ans[184][184];
bool f[184][184];
char s[184][184];
struct node{
	int x,y,d;
}c;
queue<node>q;
void bfs(){
	node n1,n2;
	while (!q.empty()) {
		n2=q.front(),q.pop();
		int x,y,d;
		x=n2.x;
		y=n2.y;
		d=n2.d;
		ans[x][y]=d;
		for(int i=0;i<4;++i) {
			int x1=x+dx[i],y1=y+dy[i];
			if(x1>=1&&x1<=n&&y1>=1&&y1<=m&&!f[x1][y1]&&s[x1][y1]=='0') {
				f[x1][y1]=true;
				n1.x=x1;
				n1.y=y1;
				n1.d=d+1;
				q.push(n1);
			}
		}
	}
}
int main() {
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			cin>>s[i][j];
			if (s[i][j]=='1') {
				c.x=i,c.y=j,c.d=0,f[i][j]=true;
				q.push(c);
			}
			ans[i][j]=1e9+7;
		}
	}
	bfs();
	for(int i=1;i<=n;++i) {
		for(int j=1;j<=m;++j)
			cout<<ans[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}