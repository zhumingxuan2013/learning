#include <iostream>
using namespace std;
int main() {
	
	unsigned long long n,a=1,b=1,c;
	
	cin>>n;
	if (n==0) {
		cout<<"0.00";
		return 0;
	}
	for (unsigned long long i=0; i<n-2; i++) {
		c=a+b;
		b=a;
		a=c;
	}
	printf("%.2lf",1.00*c);
	return 0;
}