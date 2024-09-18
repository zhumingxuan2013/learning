#include <iostream>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	int a1=1,a2=1;
	for (int i=0; i<a.size(); i++) {
		a1*=a[i]-'A'+1;
	}
	for (int i=0; i<b.size(); i++) {
		a2*=b[i]-'A'+1;
	}
	if (a1%47==a2%47) {
		cout<<"GO";
	}else {
		cout<<"STAY";
	}
	return 0;
}