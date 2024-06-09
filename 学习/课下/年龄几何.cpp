#include <iostream>

using namespace std;
int main() {
	double a,b,c,d;
	for (a=1; a<26/4; a++) {
		d=13-a;
		int e=a-d;
		if (e%3) {
			continue;
		}
		e/=3;
		b=a-e;
		c=b-e;
		if (a*b*c*d==880) {
			int x=a;
			for (int i=0; i<20; i++) {
				cout<<x<<" ";
				x-=e;
			}
			cout<<endl;
		}
	}
	return 0;
}