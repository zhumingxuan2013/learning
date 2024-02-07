#include <iostream>

using namespace std;
int main() {
	int a;
	cin>>a;
	int b[a],c[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
	}
	
	for (int l=0 ;l<a;l++) {
		if (b[l]%2==1) {
			cout<<b[l]<<" ";
		}
		
	}
	cout<<endl;
	for (int l=0 ;l<a;l++) {
		if (b[l]%2==0) {
			cout<<b[l]<<" ";
		}
		
	}
	return 0;
}