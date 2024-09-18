#include <iostream>
using namespace std;
int gcd(int n,int m){
	
	if (n<m) {
		int i=m;
		m=n;
		n=i;
	}
	int r=n%m;
	while (r) {
		
		n=m;
		m=r;
		r=n%m;
	}
	
	return m;
}
int main() {
	int n;
	cin>>n;
	while (n--) {
		int a0,a1,b0,b1,ans=0;
		cin>>a0>>a1>>b0>>b1;
		for (int i=1; i*i<=b1; i++) {
			if (b1%i==0) {
				if(i%a1==0&&gcd(i/a1,a0/a1)==1&&gcd(b1/b0,b1/i)==1) ans++;
				int y=b1/i;
				if(i!=b1/i&&y%a1==0&&gcd(y/a1,a0/a1)==1&&gcd(b1/b0,b1/y)==1) ans++;

			}
					
		}
		cout<<ans<<"\n";
	}
	return 0;
}