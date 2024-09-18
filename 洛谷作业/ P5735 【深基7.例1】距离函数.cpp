#include <iostream>
#include <math.h>
using namespace std;
double h(double a,double b,double c,double d){
	return sqrt(abs((c-a))*abs((c-a))+abs((d-b))*abs((d-b)));
}
int main() {
	double a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	double i=h(a,b,c,d)+h(c,d,e,f)+h(e,f,a,b);
	printf("%.2lf",i);
	return 0;
}