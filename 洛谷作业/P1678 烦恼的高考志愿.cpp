#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long n,m;
	cin>>n>>m;
	long long a[n],b[m];
	for (long long i=0; i<n; i++) {
		cin>>a[i];
	}	
	for (long long i=0; i<m; i++) {
		cin>>b[i];
	}
	sort(a, a+n);
	long long k=0,ans=0;

	for (long long i=0; i<m; i++) {
		long long l=0,r=n-1,mid=-1,s=1<<30;
		while(l<=r){
			mid=(l+r)/2;
			if(a[mid]<b[i])
				l=mid+1;

			else 
				r=mid-1;

			s=min(s,abs(b[i]-a[mid]));
		}
		ans+=s;
	}
	cout<<ans;
	return 0;
}