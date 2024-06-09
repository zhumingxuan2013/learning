#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int c[a];
	for (int i=0; i<a; i++) {
		c[i]=0;
	}
	for (int i=0; i<b; i++) {
		int d;
		cin>>d;
		c[d-1]++;
	}
	for (int i=0; i<a; i++) {
		for (int j=0; j<c[i]; j++) {
			cout<<i+1<<" ";
		}
	}
	return 0;
}