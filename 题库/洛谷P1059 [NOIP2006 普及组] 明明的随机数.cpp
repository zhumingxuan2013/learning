#include <iostream>
using namespace std;
int a[1001];
int main() {
	int m;
	cin>>m;
	for (int i=0; i<m; i++) {
		int n;
		cin>>n;
		a[n]=1;
	}
	int o=0;
	for (int i=0; i<1001; i++) {
		if (a[i]) {
			o++;
		}
	}
	cout<<o<<endl;
	for (int i=0; i<1001; i++) {
		if (a[i]) {
			cout<<i<<" ";
		}
	}
	return 0;
}