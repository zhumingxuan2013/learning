#include <iostream>

using namespace std;
int a(int n){
	int a=1;
	for (int i=1; i<=n; i++) {
		a*=i;
	}
	return a;
}
int b(int n){
	int c=0;
	for (int i=1; i<=n; i++) {
		c+=a(i);
	}
	cout<<c;
	return c;
}
int x;

int main() {
	cin>>x;
	b(x);
}