#include <iostream>
using namespace std;
int main() {
	int a,f[10000]{1,2};
	cin>>a;
	for (int i=2;i<a;i++) {
		f[i]=f[i-1]+f[i-2];
	}
	cout<<f[a-1];
	return 0;
}