#include <iostream>

using namespace std;
int main() {
	long long  a,b=0,c=0;
	cin>>a;
	for (int i;i<1000000;i++) {
		b=a%3;
		c=c+a+b;
		a=a-b;
		a=a/3;
		if (a<3) {
			break;
		}
	}
	cout<<c-1;
	return 0;
}