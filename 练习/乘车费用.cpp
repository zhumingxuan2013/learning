#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	double sum;
	if (a==0) {
		sum=0.0;
	}
	else {
		sum=6.0;
	}
	if (a<=10.0) {
		sum+=(a-2)*1.8;
	}
	else {
		sum+=8*1.8;
	}
	if (a>10.0) {
		sum+=(a-10)*2.7;
	}
	sum+=(b/3)*1.0;
	cout<<sum;
}