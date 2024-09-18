#include <iostream>
using namespace std;
int main() {
	int a,h=0;
	cin>>a;
	if (a%3==0) {
		cout<<3<<" ";h++;
	}
	if (a%5==0) {
		cout<<5<<" ";h++;
	}
	if (a%7==0) {
		cout<<7<<" ";h++;
	}
	if (!h) {
		cout<<'n';
	}
	return 0;
}