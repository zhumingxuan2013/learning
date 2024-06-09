#include <iostream>
#include <string.h>
#define  ll long long
using namespace std;
int main() {
	ll a,b,ans=0;
	cin>>a>>b;
	for (ll i=a; i<=b; i++) {
		string c=to_string(i);
		int flag=1;
		for (int j=0; j<c.size()-1; j++) {
			if (c[j]>=c[j+1]) {
				flag=0;
                break;	
			}
		}
		if (flag==1) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}