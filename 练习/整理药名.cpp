#include <iostream>
using namespace std;
int n;
char str[21];
int main() {
	cin>>n;
	while (n--) {
		cin>>str;
		if (str[0]>='a'&&str[0]<='z') {
			str[0]-=32;
		}
		for (int i=1; i<strlen(str); i++) {
			if (str[i]>='A'&&str[i]<='Z') {
				str[i]+=32;
			}
		}
		cout<<str<<endl;
	}
	return 0;
}