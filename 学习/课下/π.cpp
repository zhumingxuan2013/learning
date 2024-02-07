#include <iostream>

using namespace std;
int main() {
	double a=0;
	double b=1;
	while (1/b>0.000001) {
		if ((int(b-1))/2%2) {
			a=a-1/b;

		}else{
			a=a+1/b;}
		b+=2;
	}
	printf("%.15lf",4*a);
}