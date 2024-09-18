#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(string a,string b){
	if (a.size()-2!=b.size()-2) {
		return a.size()>b.size();
	}
	return a>b;
}
int main() {
	int a;
	cin>>a;
	string b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
		b[i]+=' ';
		b[i]+=(i+'1');
	}
	sort(b, b+a, cmp);
	cout<<b[0][b[0].size()-1]-'0'<<"\n";
	for (int i=0; i<b[0].size()-2; i++) {
		cout<<b[0][i];
	}
	return 0;
}
//6791385765476183659186548165418634013875
//6791385765476183659186548165418634013875