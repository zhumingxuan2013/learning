#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double a,b,c,d,A,B,T,h,X1,X2,X3;
	cin>>a>>b>>c>>d;
	A=b*b-3*a*c;
	B=b*c-9*a*d;
	T=(2*A*b-3*a*B)/(2*sqrt(A*A*A));
	h=acos(T);
	X1=(-b-2*sqrt(A)*cos(h/3))/(3*a);
	X2=(-b+sqrt(A)*(cos(h/3)+sqrt(3)*sin(h/3)))/(3*a);
	X3=(-b+sqrt(A)*(cos(h/3)-sqrt(3)*sin(h/3)))/(3*a);
	printf("%.2lf",X1);
	cout<<" "; 
	printf("%.2lf",X3);

	cout<<" ";
	printf("%.2lf",X2);

	cout<<" ";
	
	return 0;
}