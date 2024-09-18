#include <iostream>
using namespace std;
char f(string x,long long y){
	long long o=x.size();
	if (y<=x.size()) {
		return x[y-1];
	}
	while (o<y) {
		o*=2;
	}
	o/=2;
	if (y-o-1==0) {
		return f(x,y-1);
	}else {
		return f(x,y-o-1);

	}
}
int main() {
	string a;
	cin>>a;
	long long x;
	cin>>x;
	
	cout<<f(a,x);
	return 0;
}