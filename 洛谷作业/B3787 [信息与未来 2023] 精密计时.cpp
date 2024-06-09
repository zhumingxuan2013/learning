#include <iostream>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	long long ans=0;
	int c[11]{3600000,360000,0,60000,6000,0,1000,100,0,10,1};
	for (int i=0; i<11; i++) {
		ans+=(b[i]-'0')*c[i]-(a[i]-'0')*c[i];
	}
	cout<<ans;
}