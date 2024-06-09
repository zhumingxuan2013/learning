#include <iostream>
#include<algorithm>
long long a,b,l,n,ans;
using namespace std;
int main() {
	cin>>a>>b;
	for (long long i=0; i<a; i++) {
		cin>>l;
		long long o=0;
		if (n+l-b>0) {
			o=n+l-b;
		}
		n=l-o;
		ans+=o;
	}
	cout<<ans;
	return 0;
}