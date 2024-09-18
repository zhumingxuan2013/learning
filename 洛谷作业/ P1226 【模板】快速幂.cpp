#include <iostream>
using namespace std;
long long kanhaoqi1001,zikun999,zjs123456;
long long Mr_Huang(int p){
	if (p==0) {
		return 1;
	}
	long long tnnd=Mr_Huang(p/2)%zjs123456;
	tnnd=(tnnd*tnnd)%zjs123456;
	if (p%2==1) {
		tnnd=(tnnd*kanhaoqi1001)%zjs123456;
	}
	return tnnd;
}
int main() {
	cin>>kanhaoqi1001>>zikun999>>zjs123456;
	cout<<kanhaoqi1001<<"^"<<zikun999<<" mod "<<zjs123456<<"="<<Mr_Huang(zikun999);
	return 0;
}