#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int c=0,sum=0,k,p[20]{7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	string ans[1000];
	int f=0;
	string b;
	int l;
	cin>>l;
	int g=l;
	while (l) {
		string M="10X98765432";
		sum=0;
		l--;
		cin>>b;

		for (int i=0; i<17; i++) {
			sum+=p[i]*(b[i]-'0');
		}
		sum%=11;
		if (M[sum%11]!=b[17]) {
			ans[f]=b;
			f++;
			
		}

	}
	if (f==0) {
		cout<<"All passed";
	}else {
		for (int i=0; i<f; i++) {
			cout<<ans[i]<<"\n";
		}
	}
	return 0;
}