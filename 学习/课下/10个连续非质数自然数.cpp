#include <iostream>

using namespace std;
bool issushu(long long j){
	for (int i = 2; i <= j / i; i ++) {
		if (j % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	for (int i=0;;i++) {
		int a=0;
		for (int j=0; j<10; j++) {
			if (!issushu(i+j)) {
				a++;
			}
		}
		if (a==10) {
		int n=0; 
			for (int j=0; j<10; j++) {
				cout<<i+n<<" ";
				n++;
			}
			break;
		}
	}
}