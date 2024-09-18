#include <iostream>
#include <string.h>
using namespace std;
int a[15],c=0,sum=0,k;
string b;
int main() {
	cin>>b;
	for (int i=0; i<12; i++) {
		if (b[i]!='-') {
			a[c]=b[i]-'0';
			c+=1;
		}
	}
	k=b[12]-'0';
	for (int i=0; i<9; i++) {
		sum+=a[i]*(i+1);
	}
	
	if (sum%11==k&&sum%11!=10||sum%11==10&&b[12]=='X') {
		cout<<"Right";
	}else if (sum%11==10) {
		b.erase(12,1);
		cout<<b<<'X';
	}
	else {
		b.erase(12,1);
		cout<<b<<sum%11;
	}
	return 0;
}