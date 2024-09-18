#include <iostream>
using namespace std;
long long a,b,c,d,e,f;
bool q(){
	if (!d) return 0;
	if (!c) return 1;
	
	if (!b) return 0;
	if (!a) return 1;
	if (!f) return 0;
	
	if (!e) return 1;
	
	return a*c*e<b*d*f;
}
int main() {
	int n;
	cin>>n;
	while (n--) {
		cin>>a>>b>>c>>d>>e>>f;
		if (q()) {
			cout<<"YES\n";
		}else {
			cout<<"NO\n";

		}
	
	}
	return 0;
}