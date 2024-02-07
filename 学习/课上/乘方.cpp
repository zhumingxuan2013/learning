#include <iostream>

using namespace std;
int main() {
	long long a,b,ans=1;
	cin>>a>>b;
	if (a==1) {
		cout<<1;
		return 0;
	}
	else {
		for (long long i=1; i<=b; i++) {
			ans*=a;
			if (ans>1000000000) {
				cout<<-1;
				return 0;
			}
		}
	}
	cout<<ans;
	return 0;
}