#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;
struct y{
	
	int s;
	int d;	
} c[500001];
bool cmp(y a,y b){
	if(a.s==b.s){
		return a.d<b.d;
	}
	return a.s>b.s;
}
int main() {
	struct y;
	ll a,b;
	cin>>a>>b;
	for(ll i=0;i<a;i++){
		cin>>c[i].s;
		c[i].s%=b;
		if(c[i].s==0)c[i].s=b;
		c[i].d=i+1;
	}
	sort(c, c+a, cmp);
	for (ll i=0; i<a; i++) {
		cout<<c[i].d<<" ";
	}
	return 0;
}