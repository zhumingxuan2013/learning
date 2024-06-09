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
		int ans=i;
		for (int j=i;j<a;j++) {
			if (b[ans]<b[j]) {
				ans=j;
			}
		}
		int c=b[ans];
		b[ans]=b[i];
		b[i]=c;
		cout<<b[i]<<" ";
	}
	return 0;
}