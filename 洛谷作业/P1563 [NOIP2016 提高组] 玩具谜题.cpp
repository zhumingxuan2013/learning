#include <iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int p[n];
	string a[100001];
	for (int i=1; i<=n; i++) {
		cin>>p[i]>>a[i];
	}
	int k=1;
	for (int i=0; i<m; i++) {
		int z,t;
		cin>>z>>t;
		if (0==p[k]) {
			if (z==0) {
				k-=t;
			}else {
				k+=t;
			}
			k+=n;
			k%=n;

		}else {
			if (z==1) {
				k-=t;
			}else {
				k+=t;
			}
			k+=n;
			k%=n;

		}
		if(k>n)k-=n;                        
		if(k<=0)k+=n;
	}
	if(k>n)k-=n;                        
	if(k<=0)k+=n;
	cout<<a[k];
	return 0;
}