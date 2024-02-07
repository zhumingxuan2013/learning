#include <iostream>
using namespace std;
int main() {
	long long num;
	cin >> num;
	
	while (num) {
		cout <<  num % 2;
		num /= 2;
	}
	return 0;
}