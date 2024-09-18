#include <iostream>
using namespace std;
int main() {
	int n,ans=0;
	cin>>n;
	int b[n][n];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>b[i][j];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if (b[i][j]==0) {
			int sum=0;
			for (int k=0; k<n; k++) {
				sum+=b[i][k];
				sum+=b[k][j];
			}
			ans=max(ans, sum);
		}
	}
	cout<<ans;
	return 0;
}