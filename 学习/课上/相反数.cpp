#include <iostream>
#include <cmath>
using namespace std;
int main() { 
	int a,s=0;
	cin>>a;
	if (a<0){
		cout<<"-";
		a=abs(a);
	}
	while (a>0) {
		s=s*10+a%10;
		a=a/10;
	}
	cout<<s;
}