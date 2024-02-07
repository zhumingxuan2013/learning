#include <iostream>

using namespace std;
double max3(double x,double y,double z){
	x=max(x,y);
	return max(x,z);
}
int main() {
	double a,b,c;
	cin>>a>>b>>c;
	printf("%.15lf",max3(a,b,c)/(max3(a+b, b, c)*max3(a,b,b+c)));
}