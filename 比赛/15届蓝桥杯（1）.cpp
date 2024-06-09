#include <iostream>
using namespace std;
int main() {
	int a[3];
	for (int i=0; i<3; i++) {
		cin>>a[i];
	}
	if (a[0]<max(a[1],a[2])&&a[0]>min(a[1],a[2])) {
		cout<<a[0];
	}else if (a[1]<max(a[0],a[2])&&a[1]>min(a[0],a[2])) {
		cout<<a[1];
	}else {
		cout<<a[2];
	}
	return 0;
}