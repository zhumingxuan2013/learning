#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	int b[a],c[20];
	memset(c, 0, sizeof(c));
	for (int i=0; i<a; i++) {
		cin>>b[i];
		c[b[i]-1]++;
	}
	for (int i=0; i<20; i++) {
		cout<<i+1<<":"<<c[i]<<endl;
	}
}