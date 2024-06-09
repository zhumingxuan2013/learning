#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	int b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
	}
	for (int i=0; i<a; i++) {
		int flag=1;
		for (int j=i; j<a; j++) {
			if (b[i]<b[j]) {
				flag=0;
				int c=b[j];
				b[j]=b[i];
				b[i]=c;
			}
		}
		if (flag==1) {
			break;
		}
	}
	for (int i=0; i<a; i++) {
		cout<<b[i]<<" ";
	}
	return 0;
}