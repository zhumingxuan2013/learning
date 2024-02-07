#include <iostream>

using namespace std;
int main() {
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a[0], 3);
	if (a[0]==a[1]&&a[0]*a[0]*2==a[2]*a[2]) {
		cout<<1;
	}else {
		cout<<0;
	}
}