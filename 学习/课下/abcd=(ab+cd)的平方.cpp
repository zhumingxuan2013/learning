#include <iostream>

using namespace std;
int main() {
	for (int i=1000; i<10000; i++) {
		if ((i/100+i%100)*(i/100+i%100)==i) {
			cout<<i<<" ";
		}
	}
}