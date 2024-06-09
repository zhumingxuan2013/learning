#include <iostream>
using namespace std;
int main() {
	for (int i=7;;i+=7) {
		if ((i+1)%(1*2*3*5)==0) {
			cout<<i;
			break;
		}
	}
	return 0;
}