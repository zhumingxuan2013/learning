#include <iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	int ans=0,s=1;
	for (int i=1;i<=n;i++) {
		for (int j=1; j<=i; j++) {
			s*=j;
		}
		ans+=s;
		s=1;
	}
	cout<<ans;
}