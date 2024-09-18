#include<iostream>
using namespace std;
char ans[1005][1005],o[10][10]={"..+---+","./   /|","+---+ |","|   | +","|   |/.","+---+..",};
void kun(int sx,int sy){for(int i=0;i<6;i++)for(int j=0;j<7;j++)if(o[i][j]!='.')ans[sx+i][sy+j]=o[i][j];}
int main(){
	memset(ans,'.',sizeof(ans));int n,m,w,l=0;cin>>m>>n;int a114514[m+10][n+10];w=n*4+m*2;w++;for(int i=0;i<m;i++)for(int j=0;j<n;j++){cin>>a114514[i][j];l=max(l,a114514[i][j]*3+1+(m-i)*2);}for(int i=0;i<m;i++)for(int j=0;j<n;j++)for(int k=1;k<=a114514[i][j];k++)kun(l-(k*3)-2*(m-i),j*4+1+(m-i-1)*2);
	for(int i=1;i<=l;i++){for(int j=1;j<=w;j++)cout<<ans[i][j];cout<<endl;}
}