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
	long long n, b;
	for(int i = 100000; i <= 999999; i ++){
		if(isHuiWen(i) && i%95 == 0){
			if(isHuiWen(i/95))
				cout << i;
		}
	}
	return 0;
}