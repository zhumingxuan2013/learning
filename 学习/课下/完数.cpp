#include <iostream>

using namespace std;
int ans=0;
int a(int n){
	int s=0;
	for (int i=1; i<n; i++) {
		if (n%i==0) {
			s+=i;
		}
	}
	if (s==n) {
		cout<<n<<"\n";
		ans++;
	}
	return 0;
}

int main() {
	int x;
	
	cin>>x;
	for (int i=3; i<x; i++) {
		a(i);
	}
	cout<<"*"<<ans;
	return 0;
}
