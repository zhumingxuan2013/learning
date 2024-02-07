#include <iostream>

using namespace std;
int main() {
	float a[4];
	float b=0;
	for (int i=0; i<4; i++) {
		cin>>a[i];
		b+=a[i];
	}
	b/=4;
	cout<<b;
}