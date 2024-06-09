#include <iostream>
using namespace std;

int main() {
	int a[24]{2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,1,1};
	int b[24]{4,19,5,20,4,19,5,20,5,21,6,22,7,22,7,22,8,23,7,22,7,21,5,20};
	string c[24]{"LC","YS","JZ","CF","QM","GY","LX","XM","MZ","XZ","XS","DS","LQ","CS","BL","QF","HL","SJ","LD","XX","DX","DZ","XH","DH"};
	int x,y;
	cin>>x>>y;
	for (int i=0; i<24; i++) {
		if (b[i]>y) {
			if (a[i]-x==0||a[i]-x==1) {
				cout<<c[i];
				break;
			}
		}
	}
	return 0;
}