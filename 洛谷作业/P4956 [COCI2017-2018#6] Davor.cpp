#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	n/=52;
	n/=7;
	int k=0;
	for (int i=100; i>0; i--) {
		if ((n-i)%3==0 &&(n-i)/3>0){
			cout<<i<<"\n"<<(n-i)/3;
			return 0;
		}
	}
	return 0;
}