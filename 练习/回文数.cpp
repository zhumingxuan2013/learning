#include <iostream>
using namespace std;
int main() {
	long long n,a=0,b=0,c=0;
	cin>>n;
	c=n;
	while (n != 0) {
		a=a+n%10;
		n=n/10;
		a=a*10;
		
	}
	b = a/10;
	if (b==c) {
		cout<<"yes";
	}
	else {
		cout<<"no";
	}
	return 0;
}