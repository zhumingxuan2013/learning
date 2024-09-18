#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int ans=0;
	for (int i=0; i<=a; i++) {
		if (i%10==b%10&&i<b) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}