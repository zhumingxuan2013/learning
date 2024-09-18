#include <iostream>
#include <math.h>
using namespace std;
char a,b[100000000];
int x=0,y=0,m=0,x11,x12,x21,x22,o,p;
int main() {
	while (cin>>a&&a!='E'&&(!(a>='a'&&a<='z'))) {
		b[m]=a;
		m++;
	}
	for (int i=0; i<m; i++) {
		if (b[i]=='W') {
			x11++;
		}else {
			x12++;
		}
		if ((x11>=11||x12>=11)&&abs(x11-x12)>=2) {
			o++;
			cout<<x11<<":"<<x12<<"\n";
			x11=x12=0;
		}
	}
	cout<<x11<<":"<<x12<<"\n\n";
	for (int i=0; i<m; i++) {
		if (b[i]=='W') {
			x21++;
		}else {
			x22++;
		}
		if ((x21>=21||x22>=21)&&abs(x21-x22)>=2) {
			cout<<x21<<":"<<x22<<"\n";
			x21=x22=0;
			p++;
		}
	}
	cout<<x21<<":"<<x22<<"\n";
	return 0;
}