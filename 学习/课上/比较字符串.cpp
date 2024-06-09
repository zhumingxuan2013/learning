#include <iostream>
using namespace std;
bool n(string a,string b){
	for (int i=0; i<a.size(); i++) {
		if (min(a[i],b[i])+97-65!=max(a[i],b[i])) {
			return false;
		}
	}
	return true;
}
int main() {
	string a,b;
	cin>>a>>b;
	if (a.size()!=b.size()) {
		cout<<1;
	}else if (a==b) {
		cout<<2;
	}else if (n(a,b)) {
		cout<<4;
	}else{
		cout<<3;
	}
	return 0;
}