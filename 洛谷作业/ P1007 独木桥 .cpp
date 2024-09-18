#include <iostream>
using namespace std;
int l,n,ans,sum,a;
int main() {
	cin>>l>>n;
	while (n--&&cin>>a) {
		ans=max(min(l-a+1,a),ans);
		sum=max(max(l-a+1,a),sum);
	}
	cout<<ans<<" "<<sum;
	return 0;
}