#include <iostream>
#include <string.h>
#define ll long long
using namespace std;
ll s(ll n){
	n++;
	string x=to_string(n),ans="";
	if (x.find('7')>=0&&x.find('7')<x.size()) {
		string a="8"+string(x.size()-x.find('7')-1,'0');
		x=x.substr(0,x.find('7'));
		ans=x+a;
	}
	else {
		ans=x;
	}
	return stoll(ans);
}
int main() {
	ll t;
	string b="";
	cin>>t;
	while (t) {
		t--;
		ll n;
		cin>>n;
		ll ans=s(n);
		while (true) {
			if (ans%7!=0) {
				break;
			}
			ans=s(ans);
			
		}
		b+=to_string(ans)+" ";
	}
	for (ll i=0; i<b.size(); i++) {
		if (b[i]==' ') {
			cout<<"\n";
		}else {
			cout<<b[i];
		}
	}
	return 0;
}