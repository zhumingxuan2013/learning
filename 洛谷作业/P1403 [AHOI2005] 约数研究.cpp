#include <iostream>
using namespace std;
int main() {
	int a,c=0;
	cin>>a;
	
	for (int i=1;i<=a;i++) {
		c+=a/i;
	}
	cout<<c;
	return 0;
}