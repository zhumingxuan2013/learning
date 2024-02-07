#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	for (int j=1; j<=10000; j++) {
		if (a%2==0) {
			a=a/2;
		}
		else{
			a=a*3+1;
		}
		if (j>10000) {
			cout<<"no";
			break;
		}
		if (a==1) {
			cout<<j;
			break;
		}
	}
	
	return 0;
}