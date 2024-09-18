#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	long long ans=0,ans2=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if (i!=j) {
				ans2+=(a-i)*(b-j);

			}else {
				ans+=(a-i)*(b-j);

			}

		}
	}
	
	cout<<ans<<" "<<ans2;
	
	return 0;
}