#include <iostream>
using namespace std;
int main() {
	int n,ans=0;
	cin>>n;
	for (int i=1; i<n-2;i++) {
		for (int j=1; j<n-i-1;j++) {  
			
			int z=n-i-j;
			if (!(i==j||i==z||z==j)) {
				if (i!=3&&i!=7&&j!=3&&j!=7&&z!=3&&z!=7) {
					ans++;
				}
			}
		}
	}
	cout<<ans/4;
	return 0;
}