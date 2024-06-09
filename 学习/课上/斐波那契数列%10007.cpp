#include <iostream>
using namespace std;
int main() {
	long long m,f[m];
	cin>>m;
	f[0]=f[1]=1;
	for (int i=2; i<m; i++) {
		f[i]=(f[i-1]+f[i-2])%10007;
	}	
	cout<<f[m-1];
	return 0;
}