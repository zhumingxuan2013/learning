#include <iostream>

using namespace std;
int main() {
	char a[24];
	for (int i=0; i<24; i++) {
		a[i]=i+65;
	}
	int b,x=0;
	cin>>b;
	for (int i=1; i<=b; i++) {
		for (int j=1; j<=i; j++) {
			if (x==24) {
				x=0;
			}
			cout<<a[x];
			x++;
		}
		cout<<endl;
	}
	
}