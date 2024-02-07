#include <iostream>
using namespace std;
int main(){
	int n,a=0,b=0;
	cin>>n;
	for (int i=1; i<=n; i++) {
		
		b=(b*10)+n;
		a+=b;
		
	
	}
	cout<<a;
	return 0;
}