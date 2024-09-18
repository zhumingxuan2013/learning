#include <iostream>
using namespace std;
int main() {
	int n,ans=100000000;
	cin>>n;
	int a[3][2];
	for (int i=0; i<3; i++) {
		cin>>a[i][0]>>a[i][1];
		int x;
		x=n/a[i][0]*a[i][1];
		if (n%a[i][0]!=0) {
			x+=a[i][1];
		}
		ans=min(ans,x);
	}
	cout<<ans;
	return 0;
}