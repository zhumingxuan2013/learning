#include <iostream>

using namespace std;
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
	for (int i=0;i<=1000;i++) {
		if (issushu(i)) {
			cout<<i<<"\n";
		}
	}
}