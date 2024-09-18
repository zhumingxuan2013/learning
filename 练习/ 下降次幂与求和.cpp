#include <iostream>
#define m 1000000007
using namespace std;
int main() {
	long long a,b,p,sum=0;
	cin>>a>>b;
	p=1;
	while (a) {
		long long x;
		cin>>x;
		a--;
		p*=b--;
		p%=m;
		sum+=p*x;
		sum%=m;
	}
	cout<<sum;
	return 0;
}