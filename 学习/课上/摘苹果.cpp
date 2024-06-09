#include <iostream>
#include <queue>
int dx[4]{0,0,-1,1},dy[4]{-1,1,0,0},nx,ny,n,m,a[101][101],cnt=0,ax,ay;
struct point{int x,y;}h,t;
std::queue<point>q;
void bfs(int sx,int sy){
	t.x=sx,t.y=sy;
	q.push(t);
	while(!q.empty()){h=q.front();q.pop();for(int i=0;i<4;i++){nx=h.x+dx[i];ny=h.y+dy[i];if(a[nx][ny]==2||nx<0||nx>=n||ny<0||ny>=m)continue;else {t.x=nx;t.y=ny;q.push(t);a[t.x][t.y]=2;cnt++;}}}
}
int main() {
	std::cin>>n>>m;
	for (int i=0;i<n; i++) for (int j=0; j<m; j++) {std::cin>>a[i][j];if (a[i][j]==6) {ax=i;ay=j;}}
	bfs(ax, ay);
	std::cout<<cnt;
}