#include <iostream>
using namespace std;
long long n,q,a[1000005];

bool k(long long m){
	int ans=0;
	for (int i=1; i<=n; i++) {
		ans+=a[i]/m;
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
	}	
	while (l+1<r) {
		long long m=l+(r-l)/2;
		
		if (k(m)) {
			l=m;
		}else {
			r=m;
		}
	}
	cout<<l;
	return 0;
}