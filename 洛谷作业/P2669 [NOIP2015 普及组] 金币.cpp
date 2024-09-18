#include <iostream>
using namespace std;
int main() {
	//0+1=1
	//......
	//0+1+2+(1)3=6
	//0+1+2+3+（2）4=10
	//6<9
	//10>9
	//取第4行末尾4
	//10-6-（10-9//（1））=3
	//4*3=12
	//1*1+......3*3=14
	//14+12=26
	int a,b=0,c,d,e,f=1,g=0,h=2;
	cin>>a;
	for (int i=1; i<=h; i++) {
		h++;
		b+=i;
		if (b>a) {
			c=b-i;
			e=i;
			break;
		}
	}
	d=b-c-(b-a);
	for (int q=0;q<e-1; q++) {
		g=g+f*f;
		f++;
	}
	cout<<g+(d*e);
	return 0;
}
