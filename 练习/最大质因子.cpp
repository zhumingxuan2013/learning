#include <iostream>
using namespace std;
bool isZhiShu(int p){
	long long b = 2, c = 0;
	while (b < p - 1) {
		b ++;
		if (p % b == 0) {
			c = 1;
		}
	}
	if(c == 0){
		return true;
	}
	return false;
}

int main() {
	int a;
	cin >> a;
	
	for(int i = a - 1; i > 1; i --){
		if(a % i == 0){
			if(isZhiShu(i)){
				cout << i;
				break;
			}
		}
	}
	return 0;
}