#include <iostream>
using namespace std;
int main() {
	long long n;
	cin>>n;
	while (n--) {
		long long l,r;
		cin>>l>>r;
		long long ans=((r-l+1)%9*(l%9)%9+((r-l+1)%9)*((r-l+1)%9-1)%9*5%9)%9;
		cout<<ans<<"\n";
	}
	return 0;
}