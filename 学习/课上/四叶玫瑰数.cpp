#include <iostream>
using namespace std;
int a(int n){
	return n*n*n*n;
}
bool b(int l){
	if (a(l/1000)+a(l/100%10)+a(l/10%10)+a(l%10)==l) {
		return true;
	}
	return false;
}
int main() {
	int a,v;
	cin>>a>>v;
	for (int i=a; i<=v; i++) {
		if (b(i)) {
			cout<<i<<" ";
			
		}
	}
	return 0;
}