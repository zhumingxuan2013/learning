#include <iostream>
using namespace std;
int main() {
	double a;
cin>>a;
if(a<0)a-=2*a;
printf("%.2lf",a);

	return 0;
}