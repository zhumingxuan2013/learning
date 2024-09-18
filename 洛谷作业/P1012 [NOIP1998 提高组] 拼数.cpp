#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(string a,string b){
	return a+b>b+a;
}
int main() {
	int a;
	cin>>a;
	string b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];

	}
	sort(b, b+a, cmp);
	for (int i=0; i<a; i++) {
		cout<<b[i];
	}
	return 0;
}
