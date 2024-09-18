#include <iostream>

using namespace std;
int main() {
	long long  a,b=0,c;
	cin>>a;
	c=a;
	while (a>2) {
		c+=a/3;
		a=a/3+a%3;
	}
	
	cout<<c;
	return 0;
}