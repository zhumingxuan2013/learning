#include <iostream>
using namespace std;
long long ans[114514];
int main() {
	int a;
	cin>>a;
	ans[0]=ans[1]=1;
	for (int i=2; i<=a; i++) {
		for (int j=0; j<i; j++) {
			ans[i]+=ans[i-j-1]*ans[j];
		}
	}
	cout<<ans[a];
	return 0;
}