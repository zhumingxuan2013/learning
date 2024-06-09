#include <iostream>

using namespace std;
int main() {
	string b;
	cin>>b;
	char a[b.size()];
	int i=0;
	for (int i=0;i<b.size();i++) {
		a[i]=b[i];
	}
	char *p=a;
	p+=b.size();
	for (int i=0;i<=b.size();i++) {
		cout<<*p;
		p--;
	}
}