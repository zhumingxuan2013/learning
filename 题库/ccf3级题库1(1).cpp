#include <iostream>

using namespace std;
int main() {
	int a, b;
	cin>>a>>b;
	int c[b];
	int d[a];
	for (int i=0; i<a; i++) {
		d[i]=0;
	}
	for (int i=0; i<b; i++) {
		cin>>c[i];
	}
	for (int i=0; i<b; i++) {
		d[c[i]]++;
		d[c[i]]+=i;
	}
	for (int i=0; i<a; i++) {
		cout<<d[i]<<" ";
	}
}