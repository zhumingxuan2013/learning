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
	for (int i=95860;;i++) {
		if (isHuiWen(i)) {
			cout<<(i-95859)/2<<"km/s"<<"\n";
			cout<<i;
			break;
		}
	}
}