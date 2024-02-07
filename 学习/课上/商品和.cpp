#include <iostream>

using namespace std;
int main() {
	int a[5],b=0;
	int i=0;
	while (i<5) {
		i++;
		cin>>a[i];
		if (a[i]<600) {
			b+=a[i];
		}
	}
	cout<<b;
}