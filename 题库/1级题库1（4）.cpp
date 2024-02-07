#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b[5];
	for (int i=0 ;i<5 ;i++) {
		cin>>b[i];
	}
	int y=0;
	for (int i=0; i<5; i++) {
		if (b[i]<a) {
			y+=b[i];
		}
	}
	cout<<y;
	return 0;
}