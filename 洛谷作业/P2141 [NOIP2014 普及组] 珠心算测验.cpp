#include <iostream>
using namespace std;
int main() {
	int a,m=0;
	cin>>a;
	int b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
	}
	for (int i=0; i<a; i++) {
		int f=0;
		for (int j=0; j<a; j++) {
			for (int k=j+1; k<a; k++) {
				if (b[i]==b[j]+b[k]&&b[i]!=b[j]&&b[j]!=b[k]&&b[i]!=b[k]) {
					m++;
					f++;
					break;
				}
				
			}
			if (f==1) {
				break;
			}
		}
	}
	cout<<m;
	return 0;
}