#include <iostream>
#include <math.h>
using namespace std;
int main() {
	long long a;
	cin>>a;
	while (a--) {
		long long b,ans=0;
		cin>>b;
		for (long long i=0; i*i<=b; i++) {
			for (long long j=i; i*i+j*j<=b; j++) {
				for (long long k=j; i*i+j*j+k*k<=b; k++) {
					for (long long z=k; i*i+j*j+k*k+z*z<=b; z++) {
						if ((i*i+j*j+k*k+z*z)==b) {
							ans++;
						}
					}
					
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}