#include <iostream>

using namespace std;
int main() {
	int i,b,c,d,e;
	for (i=5;; i++) {
		b=4*(i-1)/5;
		c=4*(b-1)/5;
		d=4*(c-1)/5;
		e=4*(d-1)/5;
		if (i%5==1&&b%5==1&&c%5==1&&d%5==1&&e%5==1) {
			cout<<i;
			break;
		}
	}
}