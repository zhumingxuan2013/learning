#include <iostream>

using namespace std;
int x(int n,int m){
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
	int a[4];
	for (int i=0; i<4; i++) {
		cin>>a[i];
	}
	int ans=a[0];
	for (int i=1; i<4; i++) {
		ans=x(ans,a[i]);
	}
	int sum=0;
	for (int i=0; i<4; i++) {
		sum+=ans/a[i];
	}
	if (sum==ans) {
		cout<<"yes";
	}else {
		cout<<"no";
	}
}