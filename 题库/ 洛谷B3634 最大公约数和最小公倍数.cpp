#include <iostream>
using namespace std;
int a(int n,int m){

	if (n<m) {
		int i=m;
		m=n;
		n=i;
	}
	int r=n%m;
	while (r) {
		
		n=m;
		m=r;
		r=n%m;
	}

	return m;
}
int main() {
	int n,m,ans=0;
	cin>>n>>m;
	
	cout<<a(n,m)<<" "<<n*m/a(n,m);
	return 0;
}