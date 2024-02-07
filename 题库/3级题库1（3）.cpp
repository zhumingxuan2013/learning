#include <iostream>

using namespace std;
int main() {
	//int w;
	//cin>>w;
	int c[26]={};
	string aa;
	cin >> aa;
	char d;
	for (int i=0; i<aa.size(); i++) {
		d = aa[i];
		c[d-97]++;
	}
	int y=0;
	for (int i=0; i<26; i++) {
		if (y<c[i]) {
			y=c[i];
		}
	}
	char oo;
	for (int i=0; i<26; i++) {
		if (y==c[i]) {
			oo=i+97;
			cout<<oo<<" "<<y;
			break;
		}
	}
}