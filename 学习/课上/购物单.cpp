#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a=ceil(180.9*0.88+10.25*0.65+56.14*0.9+104.65*0.9+100.3*0.88+148.575+26.75*0.65+65.31);
	if (a%100==0) {
		cout<<a;
	}else {
		cout<<((a/100)+1)*100;
	}
	return 0;
}