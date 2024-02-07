#include <iostream>
using namespace std;

int main() {
	string b;
	int o=0;
	getline(cin,b);
	for (int i=0;i<b.size();i++) {
		if (b.find(" ")>0&&b.find(" ")<b.size()) {
			o++;
			b.erase(b.find(" "),1);
		}
		else {
			break;
		}
	}
	o++;
	cout<<o;
	return 0;
}