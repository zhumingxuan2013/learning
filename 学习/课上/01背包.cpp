#include <iostream>
int dp[100001][100001],n,m,a[100001][2];
int main() {
	std::cin>>m>>n;
	for (int i=0;i<m;i++)std::cin>>a[i][0]>>a[i][1];
	for (int i=0; i<n; i++) for (int j=0;j<=m; j++) {if (j<a[i][0]) dp[i][j]=dp[i-1][j];else dp[i][j]=dp[i-1][j]>dp[i-1][j-a[i][0]]+a[i][1]?dp[i-1][j]:dp[i-1][j-a[i][0]]+a[i][1];}
	std::cout<<dp[n-1][m-1];
}