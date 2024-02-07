#include <iostream>

using namespace std;
bool isjveduisushu(int j){
	for (int i = 2; i <= j / i; i ++) {
		if (j % i == 0) {
			return false;
		}
	}
	j=(j%10)*10+j/10;
	for (int i = 2; i <= j / i; i ++) {
		if (j % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	for (int i=10; i<100; i++) {
		if (isjveduisushu(i)){
			cout<<i<<"\t";
		}
	}
}