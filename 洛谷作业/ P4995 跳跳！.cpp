#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
	ll a,sum=0,l=0,r;
	cin>>a;
	r=a;
	ll b[a+1];
	b[0]=0;
	for (ll i=1; i<=a; i++) {
		cin>>b[i];
	}
	sort(b+1, b+a+1);

	while (l<r) {

		sum+=(b[r]-b[l])*(b[r]-b[l]);
		l++;

		sum+=(b[l]-b[r])*(b[l]-b[r]);
		r--;

	}
	cout<<sum;
	return 0;
}