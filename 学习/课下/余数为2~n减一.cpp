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
	
	return ans/m;
}
int main() {
	int n;
	cin>>n;
	int ans=1;
	for (int i=2; i<=n; i++) {
		ans=a(ans,i);
	}
	cout<<ans-1;
}