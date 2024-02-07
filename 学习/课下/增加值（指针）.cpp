#include <iostream>

using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int *p=&a,*q=&b,*r=&c;
	*p+=1;
	*q+=2;
	*r+=3;
	cout<<a<<" "<<b<<" "<<c<<" ";
}