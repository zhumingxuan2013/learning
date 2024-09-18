#include<iostream>
using namespace std;
int n,m,f[5000][5000];
int main(){
	cin>>n>>m;
	f[1][0]=f[2][1]=f[2][0]=f[0][0]=1;
	for (int i=3;i<=n;i++)for (int j=0;j<=m;j++)for (int k=0;k<=i-1&&j-k>=0;k++)f[i][j]=(f[i-1][j-k]+f[i][j])%10000;
	cout<<f[n][m];
	return 0; 
} 