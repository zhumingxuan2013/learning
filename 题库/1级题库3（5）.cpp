#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	int b=0;
	int q,w,e,l;
	for (int i=100; i<1000; i++) {
		l=sqrt(i);
		if (l*l==i) {
			q=i%10;
			w=i/10%10;
			e=i/100%10;
			if (q==w||w==e||q==e) {
				b++;
				if(b==a){
					cout<<i;
					break;
				}
			}
		}
	}
	return 0;
}