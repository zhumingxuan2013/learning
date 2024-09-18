#include <iostream>
#include<cstring>
using namespace std;
int b[10000];

int main() {
	int a;
	cin>>a;
	int flag=1,o=0;
	

	for (int i=0;i<10000;i++ ) {
		cin>>b[i];
		if (flag==1) {
			flag=0;
		}else  {
			flag=1;
			
		}
		for (int j=0; j<b[i]; j++) {
			cout<<flag;
		o++;
			if (o%a==0) {
				cout<<"\n";
			}
		}
	}
	return 0;
}