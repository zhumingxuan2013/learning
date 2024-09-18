#include <iostream>
#include <queue>
using namespace std;
queue<int>q,q1;
int a[401][401],ans[401][401];
int dx[8]={-2,-2,2,2,1,-1,1,-1};
int dy[8]={-1,1,-1,1,2,-2,-2,2};
int main(){
	memset(ans,-1,sizeof(ans));
	int n,m,startx,starty;
	cin>>n>>m>>startx>>starty;
	q.push(startx);
	q1.push(starty);
	ans[startx][starty]=0;
	a[startx][starty]=1;
	while(!q.empty()){
		for(int i=0;i<8;i++){
			int tx=q.front()+dx[i];
			int ty=q1.front()+dy[i];
			if(tx>0&&tx<=n&&ty>0&&ty<=m&&a[tx][ty]==0){
				a[tx][ty]=1;
				ans[tx][ty]=ans[q.front()][q1.front()]+1;
				q.push(tx);
				q1.push(ty);
			}
		}
		q.pop();
		q1.pop();
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%-5d",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}