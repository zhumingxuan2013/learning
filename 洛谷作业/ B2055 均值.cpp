#include <iostream>
using namespace std;
int main() {
	int a,b;
	double sum=0;
	cin>>a;
	b=a;
	while (b--) {
		double ans;
		cin>>ans;
		sum+=ans;
		
	}
	printf("%.14lf",sum/(1.00*a));
	return 0;
}