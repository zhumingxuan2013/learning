#include <iostream>
using namespace std;
int a(int n,int m){

	if (n<m) {
		int i=m;
		m=n;
		n=i;
	}
	int r=n%m;
	while (r) {
		
		n=m;
		m=r;
		r=n%m;
	}

	return m;
}
int main() {
	int n,m,ans=0;
	cin>>n>>m;
	
	for (int i=n; i<=m; i++) {
		if (m%i==0) {
			int j=n*m/i;
			if (a(i,j)==n&&n*m/a(i,j)==m) {
				ans++;
			}
			
		}
	}
	cout<<ans;
	return 0;
}