#include <iostream>
int dp[20001],m,n,a[20001];
int main() {
	std::cin>>m>>n;
	for (int i=1;i<=n;i++)
		std::cin>>a[i];
	for (int i=1; i<=n; i++) 
		for (int j=m;j>=a[i]; j--) {
			if(dp[j]<dp[j-a[i]]+a[i]){
				dp[j]=dp[j-a[i]]+a[i];
			}
	}
	std::cout<<m-dp[m];
}