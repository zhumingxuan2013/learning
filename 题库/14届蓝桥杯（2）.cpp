#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if (a<1000) {
		a=1000;
	}
	if (b>9999) {
		b=9999;
	}
	for (int i=a; i<=b; i++) {
		int p,o,k,u;
		p=i%10;
		o=i/10%10;
		k=i/100%10;
		u=i/1000;
		p=p*p*p*p;
		o=o*o*o*o;
		k=k*k*k*k;
		u=u*u*u*u;
		if (i==p+o+k+u) {
						
			cout<<i<<" ";
		}
	}

	return 0;
}