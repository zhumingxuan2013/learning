#include <iostream>

using namespace std;
bool isHuiWen(long long n){
	long long a=0, b=0,c;
	c = n;
	while (n != 0) {
		a=a+n%10;
		n=n/10;
		a=a*10;
	}
	b = a/10;
	if (b == c) {
		return true;
	}
	return false;
}
int main() {
	for (int i=0; i<256; i++) {
		if (isHuiWen(i*i)) {
			cout<<i<<" ";
		}
	}
}