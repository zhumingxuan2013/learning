#include <iostream>
#include <queue>
using namespace std;
struct point{
	int xx,yy;
}head,rear;
queue<point>q;
int n=1,m=1,a[101][101];
char k;
const int dx[8]{0,0,1,-1,1,1,-1,-1},dy[8]{1,-1,0,0,1,-1,1,-1};
void bfs(int x,int y){
	rear.xx=x;
	rear.yy=y;
	q.push(rear);
	a[x][y]=0;
	while(!q.empty()){
		head=q.front(),q.pop();
		for(int i=0;i<8;i++){
			int nx=dx[i]+head.xx;
			int ny=dy[i]+head.yy;
			nx=dx[i]+head.xx;
			ny=dy[i]+head.yy;
			if(nx>=0&&nx<=n&&ny>=0&&ny<m&&a[nx][ny]==1){
				rear.xx=nx;
				rear.yy=ny;
				q.push(rear);
				a[nx][ny]=0;
			}
		}
	}
}
int main(){
	while (n!=0||m!=0) {
		cin>>n>>m;
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				cin>>k;
				a[i][j]=k=='*'?0:1;
			}
		}
		int cnt=0;
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				if (a[i][j]==1) {
					cnt++;
					bfs(i,j);
				}
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}