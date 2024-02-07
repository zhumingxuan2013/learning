#include <iostream>

using namespace std;
int main() {
	int b,c=0;
	cin>>b;
	int a[10]{2,3,1,7,5,8,9,0,4,6};
	for (int i=0; i<10; i++) {
		if (a[i]==b) {
			cout<<"√";
			
			c++;
			break;
		}
	}
	if (c==0) {
		cout<<"x";
	}
}