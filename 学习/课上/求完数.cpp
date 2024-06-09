#include <iostream>
using namespace std;
int main() {
	int x,ans=0;
	cin>>x;
	for (int i=2;i<x;i++) {
		int sum=0;
		for (int j=1;j<i;j++) {
			if (i%j==0)sum+=j;
			
		}
		if (sum==i) {
			cout<<i<<"\n";
			ans++;
		}
	}
	cout<<'*'<<ans;
	return 0;
}