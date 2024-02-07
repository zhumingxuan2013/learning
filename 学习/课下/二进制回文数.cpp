#include <iostream>
#include <string.h>
using namespace std;
int main() {
	for (int i=1993;; i--) {
		int x=1;
		int num;
		num=i;
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
		for (int j=0; j<a.size(); j++) {
			if (a[j]!=a[a.size()-1-j]) {
				x=0;
				break;
			}
		}
		if (x==1) {
			cout<<i;
			break;
		}
	}
	
	

	return 0;
}