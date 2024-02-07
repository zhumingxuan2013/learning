#include <iostream>

using namespace std;
int a(int b){
	int c=1;
	for (int i=1; i<=b; i++) {
		c*=i;
	}
	return c;
}
int main() {
	int d;
	cin>>d;
	int e=0;
	for (int i=1; i<=d; i++) {
		e+=a(i);
	}
	cout<<e;
}