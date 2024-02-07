#include <iostream>

using namespace std;
int main() {
	int a;
	string b;
	cin>>a>>b;
	int ans=0;
	if (b[0]==121) {
		ans+=5;
	}
	ans+=8;
	if (a>1000) {
		int c=a-1000;
		int d=c/500;
		if (d*500!=c) {
			ans=ans+(d+1)*4;
		}
		else {
			ans=ans+d*4;

		}
	}
	cout<<ans;
}