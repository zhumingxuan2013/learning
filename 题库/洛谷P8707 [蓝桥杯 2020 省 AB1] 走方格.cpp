#include <iostream>
using namespace std;
int a[31][31];

int main() {
	int n,m;
	cin>>n>>m;

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			if (i==1||j==1) {
				a[i][j]=1;
			}else if (!(i%2==0&&j%2==0)) {
				a[i][j]=a[i-1][j]+a[i][j-1];
			}else {
				a[i][j]=0;
			}
		}
	}
	cout<<a[n][m];
	return 0;
}