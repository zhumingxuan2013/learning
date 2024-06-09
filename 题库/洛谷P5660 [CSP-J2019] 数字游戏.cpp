#include <iostream>
using namespace std;
int main() {
	string a;
	cin>>a;
	int b=0;
	for (int i=0; i<a.size(); i++) b+=a[i]-48;
	cout<<b;
}