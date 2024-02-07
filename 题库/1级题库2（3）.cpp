#include <iostream>

using namespace std;
int main() {
	
	int a[3];
	int y;

	cin>>a[0]>>a[1]>>a[2];
	y=a[0];
	for (int i=0; i<3; i++) {
		if (a[i]<y) {
			y=a[i];
		}
	}
	cout<<y;
	return 0;
	
}