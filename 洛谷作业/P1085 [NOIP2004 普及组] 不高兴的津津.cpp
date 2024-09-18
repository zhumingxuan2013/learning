#include <iostream>
using namespace std;
int main() {
	int a=7,l;
	
	int b[a];
	for (int i=0;i<a;i++ ) {
		int o,p;
		cin>>o>>p;
		b[i]=o+p;
		if(b[l]<b[i])l+=i;
	}
	if (b[l]>=8) {
		cout<<l+1;

	}else {
		cout<<0;
	}
	return 0;
}