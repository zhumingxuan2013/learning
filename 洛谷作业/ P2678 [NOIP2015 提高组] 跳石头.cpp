#include <iostream>
#include <algorithm>
using namespace std;
long long n,m,l,a[1000005];

bool k(long long p){
	long long ans=0,o=0;
	for (long long i=1; i<=n; i++) {
		if (a[i]-o<p) {
			ans++;
		}else {
			o=a[i];
		}
	}
	if (l-o<p) 
		ans++;
	
	return ans<=m;
	
}
int main() {
	cin>>l>>n>>m;
	long long le=1,r=l+1;
	for (long long i=1; i<=n; i++) {
		cin>>a[i];
	}	
	sort(a+1, a+n+1);
	while (le+1<r) {
		long long m=(le+r)/2;
		
		if (k(m)) {
			le=m;
		}else {
			r=m;
		}
	}
	cout<<le;
	return 0;
}