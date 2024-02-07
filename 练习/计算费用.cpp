#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a;
	cin>>a;
	if (a<=10.0) {
		cout<<2.5;
	}
	else {
		cout<<2.5+ceil(a-10.0)*1.5;
		
	}
}