#include <iostream>
using namespace std;
int main() {
	int a,n=0;
	cin>>a;
	double p=0;
	while (p<=a) {
		n++;
		p+=1.00/n;
	}
	cout<<n;
	return 0;
}