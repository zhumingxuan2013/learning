#include <iostream>
#include <algorithm>
using namespace std;
long long c,o[6],k=0;
int d(string s){
	if(s=="one"||s=="a"||s=="first"||s=="another"){c++;return 1;}
	if(s=="two"||s=="both"||s=="second"){c++;return 4;}
	if(s=="three"||s=="third"){c++;return 9;}
	if(s=="four"){c++;return 16;}
	if(s=="five"){c++;return 25;}
	if(s=="six"){c++;return 36;}
	if(s=="seven"){c++;return 49;}
	if(s=="eight"){c++;return 64;}
	if(s=="nine"){c++;return 81;}
	if(s=="eleven"){c++;return 21;}
	if(s=="twelve"){c++;return 44;}
	if(s=="thirteen"){c++;return 69;}
	if(s=="fourteen"){c++;return 96;}
	if(s=="fifteen"){c++;return 25;}
	if(s=="sixteen"){c++;return 56;}
	if(s=="seventeen"){c++;return 89;}
	if(s=="eightteen"){c++;return 24;}
	if(s=="nineteen"){c++;return 61;}
	else {return 0;}
}
int main() {
	string a[6];
	char b;
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>b;
	for (int i=0;i<6;i++ ) {
		o[k]=d(a[i]);
		k++;
	}
	sort(o, o+k);
	long long ans=0;
	for (int i=0; i<6; i++) {
		ans+=o[i];
		ans*=100;
	}
	cout<<ans/100;
	return 0;
}