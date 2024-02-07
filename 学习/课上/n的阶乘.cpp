#include <iostream>

using namespace std;
int main() {
	unsigned long long  a;
	cin>>a;
	unsigned long long  b=1;
	for (int i=1; i<=a; i++) {
		b*=i;
	}
	cout<<b;
}