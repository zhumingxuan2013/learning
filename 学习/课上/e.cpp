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
	int b;
	cin>>b;
	double c=1;
	for (int i=1 ;i<=b ;i++) {
		double d=1.00/a(i);
		c+=d;
	}
	printf("%.15lf",c);
}