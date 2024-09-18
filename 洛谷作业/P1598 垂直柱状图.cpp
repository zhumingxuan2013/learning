#include <iostream>
using namespace std;
int f[26];
int main() {
	string a,b,c,d;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	getline(cin, d);
	for (int i=0; i<a.size(); i++) {
		if (a[i]>='A'&&a[i]<='Z') {
			f[a[i]-'A']++;
		}
	}
	for (int i=0; i<b.size(); i++) {
		if (b[i]>='A'&&b[i]<='Z') {
			f[b[i]-'A']++;
		}
	}
	for (int i=0; i<c.size(); i++) {
		if (c[i]>='A'&&c[i]<='Z') {
			f[c[i]-'A']++;
		}
	}
	for (int i=0; i<d.size(); i++) {
		if (d[i]>='A'&&d[i]<='Z') {
			f[d[i]-'A']++;
		}
	}
	int max1=0;
	for(int i=0;i<26;i++){
		max1=max(max1,f[i]);
	}
	for (int i=max1-1;i>=0;i-- ) {
		for (int j=0; j<26; j++) {
			if (f[j]>i) {
				cout<<"* ";
			}else {
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	for (int i=0; i<26; i++) {
		char x=i+'A';
		cout<<x<<" ";
	}
	return 0;
}