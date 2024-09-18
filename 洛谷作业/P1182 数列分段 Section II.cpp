#include <iostream>
using namespace std;
long long n,q,a[1000005];

bool k(long long m){
	long long ans=0,o=0;
	for (long long i=1; i<=n; i++) {
		if (o+a[i]<=m) {
			o+=a[i];
		}else {
			o=a[i],ans++;
		}
	}
	if (ans>=q) 
		return 1;
	
	return 0;
	
}
int main() {
	cin>>n>>q;
	long long l=0,r=1<<30;
	for (long long i=1; i<=n; i++) {
		cin>>a[i];
		l=max(l, a[i]);
		r+=a[i];
	}	
	while (l<=r) {
		long long m=l+(r-l)/2;
		
		if (k(m)) {
			l=m+1;
		}else {
			r=m-1;
		}
	}
	cout<<l;
	return 0;
}