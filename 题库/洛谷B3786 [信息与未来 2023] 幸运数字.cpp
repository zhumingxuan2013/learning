#include <iostream>
#include <string.h>
using namespace std;
bool d(string c){
	int s=0;
	for (int i=0; i<c.size(); i++) {
		if (i%2==0) {
			s+=c[i]-'0';
		}else {
			s-=c[i]-'0';
		}
	}
	if (s==0) {
		return false;
	}else {
		return true;
	}
}
int main() {
	int a,b,ans=0;
	cin>>a>>b;
	for (int i=a; i<=b; i++) {
		string c=to_string(i);
		if (d(c)) {
			ans++;
		}
	}
	cout<<b-a-ans+1;
	return 0;
}