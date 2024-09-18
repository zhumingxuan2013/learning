#include <iostream>
#define ll long long
using namespace std;
int main() {
	ll a,b=1,c=0;
	while(cin>>a){
		b*=2;
		c+=a;
	}
	cout<<b*c/2;
	return 0;
}