#include <iostream>
#include <math.h>

using namespace std;
int main() {
	long long a,b,cnt=0;
	cin>>a>>b;
	for (long long i=1; i<a-b+1; i++) {
		long long o=i;
		long long ans=0;
		for (long long j=0;j<b;j++) {
			ans+=o;
			o++;
		}
		int m=sqrt(ans);
		if (m*m==ans) {
			cnt++;
		}
	}
	cout<<cnt;
}