#include <iostream>

using namespace std;


int main() {
	double a;
	cin>>a;
	int b;
	cin>>b;
	for (int i=0; i<b; i++) {
		a*=2.0;
	}
	printf("%.1lf",a);
	cout<<endl;
	printf("%.0lf",a/3-1);

}