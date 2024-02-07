#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int *a1=&a,*b1=&b;
	int c=*a1;
	a=*b1;
	b=c;
	cout<<a<<" "<<b;
}