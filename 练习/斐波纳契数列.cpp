#include <iostream>
using namespace std;
int main() {
	int a,b[10000]{1,1};
	cin>>a;
	if (a>=1) {
		for (int i=0; i<a; i++) {
			if (a==2) {
				cout<<"1 1";
				break;
			}else if (a==1) {
				cout<<"1";
				break;
			}else {
				if (i==0) {
					cout<<"1 ";
					
				}
				else {
					b[i]=b[i-1]+b[i-2];
					cout<<b[i]<<" ";
				}
			}
		}
	}
		return 0;
}