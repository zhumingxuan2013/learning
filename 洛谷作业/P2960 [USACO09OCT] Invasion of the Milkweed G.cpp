#include<iostream>
using namespace std;
const int mxn = 111;char tmp[mxn][mxn],mp[mxn][mxn];int n,m,sx,sy,hd=0,tl=1,s=0; int px[8]={-1,-1,-1,0,0,1,1,1};int py[8]={-1,0,1,-1,1,-1,0,1};struct node{	int x;	int y;	int tangnuannuande;}q[mxn*mxn]; 

int bfs(){q[tl].tangnuannuande=0;q[tl].x=sx;q[tl].y=sy;mp[sx][sy]='*';s--;  while(hd!=tl){hd++;for(int tpx,tpy,i=0;i<8;i++){tpx=q[hd].x+px[i];tpy=q[hd].y+py[i]; if(tpx<=n&&tpy<=m&&tpx>0&&tpy>0&&mp[tpx][tpy]=='.'){s--; tl++; q[tl].x=tpx;q[tl].y=tpy;q[tl].tangnuannuande=q[hd].tangnuannuande+1;  mp[tpx][tpy]='*';if(s==0){return q[tl].tangnuannuande; }}}}return 0;}

int main()
{char jinitaimei;scanf("%d%d%d%d",&m,&n,&sy,&sx);  for(int i=1;i<=n;i++){scanf("%c",&jinitaimei);  for(int j=1;j<=m;j++){scanf("%c",&tmp[i][j]);  if(tmp[i][j]=='.')s++; }}for(int  i=1;i<=n;i++)for(int j=1;j<=m;j++)mp[i][j]=tmp[n-i+1][j];printf("%d",bfs());
    
	return 0;
}