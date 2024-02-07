#include <iostream>
#include <string.h>
using namespace std;
int main() {
	long long num;
	cin >> num;
	string a;
	while (num>0) {
		string b;
		if (num%2==1) {
			b="1";
		}else {
			b="0";
		}
		a.replace(a.size(),0,b);
		num /= 2;
	}
	for (int i=a.size()-1; i>=0; i--) {
		cout<<a[i];
	}

	return 0;
}