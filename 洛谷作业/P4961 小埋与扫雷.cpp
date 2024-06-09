#include <iostream>
const int dx[8]{0,0,1,-1,1,1,-1,-1},dy[8]{1,-1,0,0,1,-1,1,-1};//位置有八个
int n,m,a[1005][1005];//1为雷，0为数字，2为空格
long long number_3bv=0,space_3bv=0,_3bv=0;//数字部分 空格部分 总数
void dfs(int x,int y){//空数量
	a[x][y]=1;
	for (int i=0; i<8; i++) {if((x+dx[i]<0||x+dx[i]>=n||y+dy[i]<0||y+dy[i]>=m||a[x+dx[i]][y+dy[i]]==0)||(a[x+dx[i]][y+dy[i]]==1)){continue;/*下一个*/}else if (a[x+dx[i]][y+dy[i]]==2) {dfs(x+dx[i], y+dy[i]);}}
	return ;
}
void No_spaces(int x,int y){//是否有空格
	for (int i=0; i<8; i++) {if (x+dx[i]<0||x+dx[i]>=n||y+dy[i]<0||y+dy[i]>=m) {continue;}if(a[x+dx[i]][y+dy[i]]==2){return ;/*周围八格有“空格”*/}}
	number_3bv++;//计数器加一
	return ;//周围八格没有“空格”
}
int	change(int x,int y){
	if (a[x][y]==1) {return 1;/*是雷*/}
	for (int i=0; i<8; i++) {if (x+dx[i]<0||x+dx[i]>=n||y+dy[i]<0||y+dy[i]>=m) {continue;}if(a[x+dx[i]][y+dy[i]]==1){return 0;/*是数字*/}}
	return 2;//是空格
}
int main() {
	std::cin>>n>>m;
	for (int i=0; i<n; i++) {for (int j=0; j<m; j++) {std::cin>>a[i][j];}}//输入
	for (int i=0; i<n; i++) {for (int j=0; j<m; j++) {a[i][j]=change(i,j);}}//变化
	for (int i=0; i<n; i++) {for (int j=0; j<m; j++) {if (a[i][j]==0) {No_spaces(i, j);}}}//统计周围八格没有“空格”的“数字”个数
	for (int i=0; i<n; i++) {for (int j=0; j<m; j++) {if (a[i][j]==2) {dfs(i, j);/*开始dfs*/	space_3bv++;/*计数器加一*/}}}
	_3bv=space_3bv+number_3bv;
    std::cout<<_3bv<<std::endl;
}