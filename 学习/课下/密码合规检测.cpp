#include <iostream>

using namespace std;
bool checkPassword(string a){
	if (a.size()<6||a.size()>12) {
		return false;
	}
	int i=a.size(),lowercase=0,capital=0,number=0,Specialcharacter=0,sum=0;
	for (int x=0; x<i; x++) {
		if (!((a[x]>='a'&&a[x]<='z')||
			(a[x]>='0'&&a[x]<='9')||
			(a[x]>='A'&&a[x]<='Z'))) {
			if (!(a[x]=='!'||a[x]=='@'||a[x]=='#'||a[x]=='$')) {
				return false;
			}
		}
		if (a[x]>='a'&&a[x]<='z'){
			lowercase=1;
		}else if (a[x]>='0'&&a[x]<='9') {
			number=1;
		}else if (a[x]>='A'&&a[x]<='Z') {
			capital=1;
		}else {
			Specialcharacter=1;
		}
	}
	if (lowercase==0) {
		sum++;
	}
	if (capital==0) {
		sum++;
	}
	if (number==0) {
		sum++;
	}
	if (sum>1) {
		return false;
	}
	if (Specialcharacter!=1) {
		return false;
	}
	return true;
}
int main() {
	string s;
	cin>>s;
	s.insert(s.size(),",");
	int ans=1,n=0,m=0;
	for (int i=0; i<s.size();i++) {
		if (s[i]==',') {
			ans++;
		}
	}
	string x[ans];
	int size=s.size();
	for (int i=0; i<size;i++) {
		if (s[i]==',') {
			x[n]=s.substr(m,i-m);
			m=i+1;
			n++;
		}
	}
	for (int i=0;i<ans;i++) {
		if (checkPassword(x[i])) {
			cout<<x[i]<<"\n";
		}
	}
	return 0;
}