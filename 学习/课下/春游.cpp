#include <iostream>

using namespace std;
int main() {
	int n,m,x,ans=0;
	cin>>n>>m;
	bool a[n];
	memset(a, 0, n);
	for (int i=0;i<m;i++) {
		cin>>x;
		a[x]=true;
	}
	for (int i=0; i<n; i++) {
		if (a[i]==false) {
			cout<<i<<"\t";
		}
		else {
			ans++;
		}
	}
	if (ans==n) {
		cout<<n;
	}
}