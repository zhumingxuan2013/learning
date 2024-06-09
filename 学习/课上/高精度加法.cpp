#include <iostream>
using namespace std;
int main() {
	string s,b1;
	cin>>s>>b1;
	int a[max(s.size(),b1.size())+1],b[max(s.size(),b1.size())+1];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (int i=0; i<s.size(); i++) {
		a[i]=s[i]-48;
	}
	for (int i=0; i<s.size()/2; i++) {
		int c=a[i];
		a[i]=a[s.size()-1-i];
		a[s.size()-1-i]=c;
	}
	for (int i=0; i<b1.size(); i++) {
		b[i]=b1[i]-48;
	}
	for (int i=0; i<b1.size()/2; i++) {
		int c=b[i];
		b[i]=b[b1.size()-1-i];
		b[b1.size()-1-i]=c;
	}
	int ans[max(s.size(),b1.size())+1];
	int lenc=0;
	int x=0;
	while (lenc<max(s.size(),b1.size())) {
		ans[lenc]=b[lenc]+a[lenc]+x;
		x=ans[lenc]/10;
		ans[lenc]%=10;
		lenc++;
	}
	if (x!=0) {
		cout<<x;
	}
	for (int i=max(s.size(),b1.size())-1; i>=0; i--) {
		cout<<ans[i];
	}
	return 0;
}