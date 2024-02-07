#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int c=0,d=0;
	for (int i=min(a,b); i<=max(a,b); i++) {
		cout<<i;
		if (i<=0) {
			c++;
		}
		else {
			d++;
		}
	}
	cout<<endl<<c<<endl<<d;
	
}