#include <iostream>
long long dp[100000001],n,m,a[10000000][2];
int main() {
	std::cin>>m>>n;
	for (long long i=1;i<=n;i++)
		std::cin>>a[i][0]>>a[i][1];
	for (long long i=1; i<=n; i++) {
		for(long long j=a[i][0];j<=m;j++)
				dp[j]=std::max(dp[j-a[i][0]]+a[i][1], dp[j]);
			
	}
	std::cout<<dp[m];
}