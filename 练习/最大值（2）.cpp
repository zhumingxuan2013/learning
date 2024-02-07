#include <iostream>
using namespace std;
int main() {
	int i,b,c,d=1,ans=0;
	cin>>i;
	for (int j=1; j<=i; j++) {
		cin>>b;
		if(b < 0 && j == 1)
		{
			c = b;
		}
		if(b > 0) {
			ans++;
		}
		if (b<0&&b>c) {
			d=j;
			c=b;
		}
	}
	cout << d<<endl;
	cout<<ans;
	return 0;
}