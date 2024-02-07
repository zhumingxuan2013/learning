#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double p, a, b, c, z;
	cin >> a >> b >> c;
	p = (a+b+c)/2;
	z = p*(p-a)*(p-b)*(p-c);
	printf("%.15lf", sqrt(z));
	return 0;
}