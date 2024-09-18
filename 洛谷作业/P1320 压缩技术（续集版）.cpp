#include <iostream>
#include <math.h>
using namespace std;
int o=0,ans[1000],k,l=1,b=48;

int main() {
	char a;
	while (cin>>a) {
		k++;

		if (a==b) {
			ans[l]++;
		}else  {
			l++;

			ans[l]++;
			b=a;
		}
	}
	cout<<sqrt(k);
	for (int i=1;i<=l;i++ ) {
		cout<<" "<<ans[i];
	}
	return 0;
}