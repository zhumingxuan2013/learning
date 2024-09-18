#include <iostream>
using namespace std;
int a[102][102];

int main() {
	int n,m;
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			char p;
			cin>>p;
			if (p=='*') {
				a[i][j]=1;
			}
		}
	}
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			if (a[i][j]==1) {
				cout<<"*";
			}else {
				cout<<a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
			}
			
		}
		cout<<"\n";
	}

	return 0;
}