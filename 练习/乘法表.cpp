#include <iostream>
using namespace std;
int main() {
	int a=9,b=1;
	for (int i=1; i<=a; i++) {
		for (int o=1; o<=i; o++) {
			cout<<i<<"*"<<o<<"="<<i*o<<" ";
		}	
		cout << endl;
	}
	return 0;
}