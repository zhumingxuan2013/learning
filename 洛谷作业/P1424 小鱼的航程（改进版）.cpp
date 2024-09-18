#include <iostream>
using namespace std;
int main() {
	int a,b,ans=0;
	cin>>a>>b;
	while (b) {
		b--;
		if(a!=7&&a!=6)ans+=250;
		if (a==7) {
			a=1;
		}
		else {
			a++;
		}
	}
	cout<<ans;
	return 0;
}