#include <iostream>
using namespace std;
int main() {
	string a;
	cin>>a;
	if (a[0]=='0') {
		cout<<0;
		return 0;
	}
	if (a[0]=='-') {
		a.erase(0,1);
		cout<<'-';
	}
	for (int i=0; i<a.size()/2; i++) {
		swap(a[i],a[a.size()-i-1]);
	}
	int f=0;
	for (int i=0; i<a.size(); i++) {
		if (a[i]!='0') {
			f=1;
		}
		if (f==1) {
			cout<<a[i];
		}
	}
	return 0;
}