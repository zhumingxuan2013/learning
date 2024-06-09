#include <iostream>
#include <queue>
using namespace std;
struct pos
{
	int x,y;
}h,r;
queue<pos>q;
int dx[4]={0,0,-1,1},
  dy[4]={-1,1,0,0};
int a[101][101];
int nx,ny;
int n,m,cnt;
void bfs(int xx,int yy)
{
	r.x=xx;r.y=yy;
	q.push(r);
	a[xx][yy]=0;
	while (!q.empty())
		{
		h=q.front(),q.pop();
		for (int i=0; i<4; i++)
		{
			nx=h.x+dx[i];
			ny=h.y+dy[i];
			if (nx<0||nx>=n||ny<0||ny>=m||a[nx][ny]==0) 
			continue;
		    else{
				r.x=nx;r.y=ny;
				q.push(r);
				a[nx][ny]=0;
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	for (int i=0;i<n;i++) 
		for (int j=0; j<m; j++) 
			scanf("%1d",&a[i][j]);
	for (int i=0;i<n;i++) 
		for (int j=0; j<m; j++) 
			if (a[i][j]>0) {
				bfs(i, j);
				cnt++;
			}
	cout<<cnt;
	return 0;
}