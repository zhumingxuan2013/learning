#include <iostream>
using namespace std;
int a,b,c;
int f(int p){
	if (p==0) {
		return 1;
	}
	int t=f(p/2)%c;
	t=t*t%c;
	if (p%2==1) {
		t=t*a%c;
	}
	return t;
}
int main() {
	cin>>a>>b>>c;
	cout<<f(b);
}