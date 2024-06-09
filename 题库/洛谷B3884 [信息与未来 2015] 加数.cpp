#include <iostream>
#include <string.h>

using namespace std;
int main() {
	int a,ans=0;
	cin>>a;
	while (a) {
		string b=to_string(a);
		ans+=b.size();
		a/=2;
	}
	cout<<ans;
}