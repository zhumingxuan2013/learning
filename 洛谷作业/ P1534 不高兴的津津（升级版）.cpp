#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[10086]{0},sum=0;
	for (int i=1; i<=n; i++) {
		int x,y;
		cin>>x>>y;
		a[i]=a[i-1]+x+y-8;
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}