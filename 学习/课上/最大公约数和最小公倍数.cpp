#include <iostream>

using namespace std;
int a(int n,int m){
	int ans=n*m;
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
	cout<<m<<"\t"<<ans/m;
	return 0;
}
int n,m;
int main() {
	cin>>n>>m;
	a(n,m);
}