#include <iostream>

using namespace std;
int main() {
	long long a;
	cin>>a;

	int c=10-(a*2/16000);
	
	if (a>8000*10-11500) {
		cout<<0;
	}
	else {
		cout<<c;
	}
}