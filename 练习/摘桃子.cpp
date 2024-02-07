#include <iostream>

using namespace std;

int main() {
	int a[10],q=0,ans=0;
	for (int s=0; s<10;s++) {
		cin>>a[s];
	}
	cin>>q;
	q=q+30;
	for (int i=0;i<10; i++) {
		if (q >= a[i]) {
			ans++;
		
		}
		
	}
	cout<<ans<<endl;
	return 0;
}