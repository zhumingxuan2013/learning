#include <iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for (int p=n; p>0; p--) {
		cin>>a[p];
	}
	for (int s=n; s>0; s--) {
		cout<<a[s]<<" ";
	}
	cout<<endl;
	for (int i=1; i<=n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}