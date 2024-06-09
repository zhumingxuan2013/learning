#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string s,b1;
	cin>>s>>b1;
	if (s=="0") {
		cout<<b1;
	}
	else if (b1=="0") {
		cout<<s;
	}
	char x[max(s.size(),b1.size())+1],y[max(s.size(),b1.size())+1];
	for (int i=0; i<s.size(); i++) {
		x[i]=s[i];
	}
	for (int i=0; i<b1.size(); i++) {
		y[i]=b1[i];
	}
	if (s.size()<b1.size()||s.size()==b1.size()&&strcmp(x,y)) {
			string n=b1;
			b1=s;
			s=n;
			cout<<"-";
	}
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
	while (lenc<max(s.size(),b1.size())) {
		if (a[lenc]<b[lenc]) {
			a[lenc]+=10;
			a[lenc+1]--;
		}
		ans[lenc]=a[lenc]-b[lenc];
		lenc++;
	}

	int o=0;
	for (int i=max(s.size(),b1.size())-1; i>=0; i--) {
		if (!(ans[i]==0&&o==0) ){
			cout<<ans[i];
			o=1;
		}
	}
	return 0;
}