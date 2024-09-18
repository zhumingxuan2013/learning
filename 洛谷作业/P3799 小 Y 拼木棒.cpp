#include <iostream>
using namespace std;
int a[5001];

int main() {
	int n,x=1e9,y=-1e9,mod=1e9+7,ans=0;
	cin>>n;
	while (n--) {
		int b;
		cin>>b;
		a[b]++;
		x=min(b, x);
		y=max(b, y);
	}
	for (int i=x+1; i<=y; i++) {
		if (a[i]>1) {
			for (int j=x; j<=i/2; j++) {
				if (j!=i-j) {
					ans+=a[i]*(a[i]-1)*a[j]*a[i-j]/2%mod;
				}else if(a[j]>=2&&j*2==i){
					ans+=a[i]*(a[i]-1)*a[i/2]*(a[i/2]-1)/4%mod;
				}
			}
			ans%=mod;
		}
	}
	ans%=mod;

	cout<<ans;
	return 0;
}