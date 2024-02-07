#include <iostream>
#include <math.h>
using namespace std;
double h(int a,int b,int c){
	double p, z;
	p = (a+b+c)/2;
	z = p*(p-a)*(p-b)*(p-c);
	z=sqrt(z);
	return z;
}
int main() {
	int a[7];
	for (int i=0; i<7; i++) {
		cin>>a[i];
	}
	printf("%.15lf",h(a[2],a[1],a[5])+h(a[0],a[6],a[5])+h(a[4],a[3],a[6]));
}