#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	for (int i=1; i<=a; i++) {
		cout<<max(i-1, a-i)*2;
		cout<<endl;
	}
	return 0;
}