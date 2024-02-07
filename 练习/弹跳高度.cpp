#include <iostream>
using namespace std;
int main(){
	double a,b=0;
	cin>>a;
	for (int i=0;i<11;i++) {
		a=a/2;
		b=b+a;
	}
	cout<<a<<endl<<b;
	return 0;
}