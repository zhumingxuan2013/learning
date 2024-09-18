#include<iostream>
using namespace std;
int n,a,b,c[210],d[210];
void dfs(int pos,int step){
	d[pos]=step;
	int pc=pos-c[pos];
	if(1<=pc&&step+1<d[pc])dfs(pc,step+1);
	pc=pos+c[pos];
	if(pc<=n&&step+1<d[pc])dfs(pc,step+1);
	return;
}
int main(){
	memset(d,0x3f,sizeof(d));
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)cin>>c[i];
	dfs(a,0);
	cout<<(d[b]==0x3f3f3f3f?-1:d[b]);
	return 0;
}