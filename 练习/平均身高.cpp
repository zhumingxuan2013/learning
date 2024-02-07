#include <iostream>

using namespace std;
int main() {
	int a;
	cin>>a;
	double c=0;
	int b[a];
	for (int i=0 ; i<a; i++) {
		cin>>b[i];
	}
	for (int s=0;s<a;s++) {
		c+=b[s];
	}
	c=c/a;
	printf("%.1lf",c);
	cout<<endl;
	for (int m=0; m<a; m++) {
		if (b[m]>c) {
			cout<<m+1<<":"<<b[m]<<" ";
		}
	}
	return 0;
}