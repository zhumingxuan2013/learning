#include <iostream>

using namespace std;
int main() {
	for (int i=1000; i<10000; i++) {
		if (i/1000==i/100%10 && i%10==i/10%10) {
			cout<<i<<" ";
		}
	}
}