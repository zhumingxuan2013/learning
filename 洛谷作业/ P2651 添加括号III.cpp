#include <iostream>
using namespace std;
int gcd(int x,int y){return y==0?x:gcd(y,x%y);}
int main() {
	int h;
	cin>>h;
	while (h--) {
		int a[114514];
		int n;
		cin>>n>>a[0]>>a[1];
		a[1]/=gcd(a[0],a[1]);
		for(int i=2;i<n;i++){
			cin>>a[i];
			a[1]/=gcd(a[1],a[i]);
			
		}
		if (a[1]==1) {
			cout<<"Yes\n";
		}else {
			cout<<"No\n";
		}
	}
	return 0;
}