#include <iostream>
int dp[10001],n,m,a[10001][2];
int main() {
	std::cin>>m>>n;
	for (int i=1;i<=m;i++)
		std::cin>>a[i][0]>>a[i][1];
	for (int i=1; i<=n; i++) 
		for (int j=m;j>0; j--) {
			if(j>=a[i][0]){
				dp[j]=std::max(dp[j-a[i][0]]+a[i][1], dp[j]);
			}
	}
	std::cout<<dp[m];
}