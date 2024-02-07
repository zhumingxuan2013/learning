#include <iostream>

using namespace std;
int main() {
	unsigned long long int a;
	cin>>a;
	unsigned long long int b[a];
	unsigned long long int p=0;
	for (unsigned long long int i=0; i<a; i++) {
		cin>>b[i];
		if (b[i]>p) {
			p=b[i];
		}
	}
	unsigned long long int o[p+1];
	for (unsigned long long int i=0; i<p+1; i++) {
		o[i]=0;
	}
	for (unsigned long long int i=0; i<a; i++) {
		o[b[i]]++;
	}
	for (unsigned long long int i=0; i<p+1; i++) {
		if (o[i]==1) {
			cout<<i;
		}
	}
	return 0;
}