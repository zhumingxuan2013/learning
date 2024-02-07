#include <iostream>
using namespace std;
int a;
char str[21];
int main() {
cin>>a;
	while (a--) {
		int p=1;
		cin>>str;
		if (isdigit(str[0])) {
			p=0;
		}
		for (int i=1; str[i]; i++) {
			if (str[i]!='_'&&!isalpha(str[i])&&!isdigit(str[i])) {
				p=0;
			}
		}
		if (p==1) {
			cout<<"yes"<<endl;
		}
		else {
			cout<<"no"<<endl;

		}
	}
			
	return 0;
}