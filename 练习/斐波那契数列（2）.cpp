#include <iostream>
using namespace std;
int main() {
	int aa;
	cin>>aa;
	int bb[aa];
	for (int i=0;i<aa; i++) {
		cin>>bb[i];
	}
	int a=0,b[10000]{1,1};
	for (int i=2; i<10000; i++) {
			b[i]=b[i-1]+b[i-2];
		}
	for (int i=0; i<aa; i++) {
		if (bb[i]==1||bb[i]==2) {
			cout<<1<<endl;;
		}
		else {
			cout<<b[bb[i]-1]%1000<<endl;
		}
	}
	return 0;
}