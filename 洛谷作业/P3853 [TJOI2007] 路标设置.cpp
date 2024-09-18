#include <iostream>
using namespace std;
long long n,k,r,a[100005];

int main() {
	cin>>r>>n>>k;
	long long l=1;
	for (long long i=0; i<n; i++) {
		cin>>a[i];
	}	
	long long ans=-1;
	while (l<=r) {
		long long mid=l+(r-l)/2;
		long long m=0;
		for (long long i=1; i<n; i++) {
			long long f=a[i]-a[i-1];
			if (f>mid) {
				m+=(f-1)/mid;
			}
		}
		if (m<=k) {
			ans=mid;
			r=mid-1;
		}else {
			l=mid+1;
		}
	}
	cout<<ans;
	return 0;
}