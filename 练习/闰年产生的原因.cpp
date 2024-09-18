#include <iostream>
using namespace std;
int a1,a2,a3;
int main() {
	int a;
	cin>>a;
	for (int i=1; i<=a; i++) {
		a1+=5;
		a2+=48;
		a3+=46;
		if (i%4==0) {
		    a1-=24;
		}
		if (i%100==0) {
		    a1+=24;
		}
		if (i%400==0) {
			a1-=24;
	    }	
	}

	a2+=a3/60;
	a3%=60;
	a1+=a2/60;
	a2%=60;
	cout<<a1<<" "<<a2<<" "<<a3;
	return 0;
}