#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	if ((a/100)*(a/100)*(a/100)+(a/10%10)*(a/10%10)*(a/10%10)+(a%10)*(a%10)*(a%10)==a) {
		cout<<"yes";
	}else {
		cout<<"No";
	}
	return 0;
}