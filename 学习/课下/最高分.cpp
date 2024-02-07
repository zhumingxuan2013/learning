#include <iostream>

using namespace std;
int main() {
	int b;
	cin>>b;
	int a[b];
	int c=0;
	for(int i=0;i<b;i++){
		cin>>a[i];
		if (c<a[i]) {
			c=a[i];
		}
	}
	cout<<c;
}