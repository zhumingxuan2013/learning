#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main() {
	ll a;
	cin>>a;
	ll b[4];
	memset(b, 0, sizeof(b));
	for (ll i=0; i<a; i++) {
		b[0]=i;
		for (ll j=0; j<a; j++) {
			b[1]=j;
			for (ll k=0; k<a; k++) {
				b[2]=k;
				b[3]=sqrt(a-(i*i+j*j+k*k));
				if (b[0]*b[0]+b[1]*b[1]+b[2]*b[2]+b[3]*b[3]==a&&b[3]>=0) {
					for (int ii=0; ii<4; ii++) {
						cout<<b[ii]<<" ";
						
					}
					return 0;
				}
			}
		}
	}
	return 0;
}