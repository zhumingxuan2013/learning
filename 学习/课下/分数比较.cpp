#include <iostream>
using namespace std;
int x(int n,int m){
	int ans=n*m;
	if (n<m) {
		int i=m;
		m=n;
		n=i;
	}
	int r=n%m;
	while (r) {
		n=m;
		m=r;
		r=n%m;
	}
	return ans/m;
}
int zhuanhuan(string a){
	int n=0;
	for (int i=0; i<a.size(); i++) {
		n=n*10+(a[i]-'0');
	}
	return n;
}
int main() {
	string a,b[2],c[4];
	int m[4];
	cin>>a;
	for (int i=0; i<a.size(); i++) {
		if (a[i]==',') {
			b[0]=a.substr(0,i);
			b[1]=a.substr(i+1,a.size()-i);
			break;
		}
	}
	for (int i=0; i<b[0].size(); i++) {
		if (b[0][i]=='/') {
			c[0]=b[0].substr(0,i);
			c[1]=b[0].substr(i+1,b[0].size()-i);
			break;
		}
	}
	for (int i=0; i<b[1].size(); i++) {
		if (b[1][i]=='/') {
			c[2]=b[1].substr(0,i);
			c[3]=b[1].substr(i+1,b[1].size()-i);
			break;
		}
	}
	for (int i=0; i<4; i++) {
		m[i]=zhuanhuan(c[i]);
	}
	if (m[0]*m[3]<m[1]*m[2]) {
		cout<<b[0]<<"<"<<b[1];
	}else if (m[0]*m[3]>m[1]*m[2]) {
		cout<<b[0]<<">"<<b[1];
	}else {
		cout<<b[0]<<"="<<b[1];
	}
	return 0;
}