#include <iostream>
#include <map>
using namespace std;
map<int,string>a;
int main() {
	int b;
	cin>>b;
	b=(b%2+2)%2;
	a[1]="odd";
	a[0]="even";
	cout<<a[b];
	return 0;
}