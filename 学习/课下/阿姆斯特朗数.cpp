#include <iostream>

using namespace std;
int main() {
	int a=0;
	for (int i=0; i<10; i++) {
		if (i*i*i==i) {
			a++;
		}
	}
	for (int i=10; i<100; i++) {
		if (i/10*i/10*i/10+i%10*i%10+i%10==i) {
			a++;
		}
	}
	for (int i=10; i<100; i++) {
		if (i/10%10*i/10%10*i/10%10+i%10*i%10+i%10+i/100*i/100+i/100==i) {
			a++;
		}
	}
	cout<<a;
}