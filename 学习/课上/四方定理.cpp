#include <iostream>
using namespace std;
int main() {
	int a,sum=0;
	for (int i=0; i<4; i++) {
		cin>>a;
		sum+=a*a;
	}
	cout<<sum;
	return 0;
}