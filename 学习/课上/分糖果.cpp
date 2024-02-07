#include <iostream>

using namespace std;
int main() {
	int n,l,r,ans=0;
	cin>>n>>l>>r;
	for (int i=l; i<=r; i++) {
		if (ans<i%n) {
			ans=i%n;
		}
	}
	cout<<ans;
	return 0;
}