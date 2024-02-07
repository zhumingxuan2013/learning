#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int c;
	int d;
	if (a>b) {
		d=a;
	}
	else {
		d=b;
	}
	for(int i=d;i>0;i--){
		if (a%i==0&&b%i==0) {
			c=i;
			break;
		}
	}
	cout<<a*b/c-c;
}