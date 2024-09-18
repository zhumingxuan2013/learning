#include <iostream>
long long dp[30][30],x,y,n,m,dp2[30][30];
int main() {
	std::cin>>n>>m>>x>>y,x++,y++,n++,m++,dp[x][y]=dp[x-1][y-2]=dp[x-2][y-1]=dp[x-2][y+1]=dp[x-1][y+2]=dp[x+1][y-2]=dp[x+2][y-1]=dp[x+2][y+1]=dp[x+1][y+2]=1,dp2[1][1]=1;
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)if(!(i==1&&j==1)&&dp[i][j]==0)dp2[i][j]=dp2[i-1][j]+dp2[i][j-1];
	std::cout<<dp2[n][m];
}