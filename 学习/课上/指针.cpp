#include <iostream>

using namespace std;
int main() {
	int a[100];
	for (int i=0; i<100; i++) {
		a[i]=i;
	}
	int *p=&a[0];
	for (int i=0; i<100; i++) {
		
		cout<<*p<<endl;
		p++;
		if (i==99) {
			break;
		}
		cout<<*p<<" ";

	}
	p=&a[99];
	cout<<endl;
	for (int i=99; i>=0; i--) {
		cout<<*p<<endl;
		p--;
		if (i==0) {
			break;
		}
		cout<<*p<<" ";
	}

}