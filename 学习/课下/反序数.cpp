#include <iostream>

using namespace std;
int main() {
	for (int i=1000; i<10000; i++) {
		if (i*9<10000) {
			if (i/1000==(i*9)%10&&i/100%10==(i*9)/10%10&&i/10%10==(i*9)/100%10&&i%10==(i*9)/1000) {
				cout<<i;
			}
		}
	}
}