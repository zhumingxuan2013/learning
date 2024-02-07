#include <iostream>

using namespace std;
int main() {
	int a,b=0;
	cin>>a;
	for (int i=0; i<8; i++) {
		if(a%10==1){
			b++;
		}
		a=a/10;
		
	}
	cout<<b;
}