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
bool issushu(long long j){
	if (j==0||j==1) {
		return false;
	}
	for (int i = 2; i <= j / i; i ++) {
		if (j % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	for (int i=10; i<1000; i++) {
		if (issushu(i)&&isHuiWen(i)) {
			cout<<i<<"\n";
		}
	}
}