#include <iostream>
using namespace std;
int main() {
	string a;
	unsigned long long int b=0;
	cin>>a;
	if (a[a.size()-1]=='%') {
		for (int i=a.size()-2; i>=0; i--) {
			b*=10;
			b+=a[i]-'0';
		}
		cout<<b<<'%';
		return 0;
	}
	for (int i=0; i<a.size(); i++) {
		if (a[i]=='/'||a[i]=='.') {
			for (int j=i-1; j>=0; j--) {
				b*=10;
				b+=a[j]-'0';
			}
			cout<<b<<a[i];
			b=0;
			for (int j=a.size()-1; j>i; j--) {
				b*=10;
				b+=a[j]-'0';
			}
			while (b%10==0) {
				if (b==0) {
					cout<<0;
					return 0;
				}
				b/=10;
			}
			cout<<b;
			return 0;
		}
	}
	for (int i=a.size()-1; i>=0; i--) {
		b*=10;
		b+=a[i]-'0';
	}
	cout<<b;
	return 0;
}