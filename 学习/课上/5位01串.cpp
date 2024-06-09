#include <iostream>

using namespace std;
int main() {
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			for (int k=0; k<2; k++) {
				for (int n=0; n<2; n++) {
					cout<<i<<j<<k<<n<<0<<endl;
					cout<<i<<j<<k<<n<<1<<endl;
				}
			}
		}
	}
	return 0;
}