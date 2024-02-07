#include <iostream>
using namespace std;
int main(){
	int i,a,b,c=0,d=0;
	cin>>i;
	for (int j=0;j<i; j++) {
		cin>>a>>b;
		if (a>=90&&a<=140&&b>=60&&b<=90) {
			c++;
			if (c>d) {
				d=c;

			}
					}
		else
			c=0;
		
	}
	cout<<d;
	return 0;
}