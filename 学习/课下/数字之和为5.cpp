#include <iostream>

using namespace std;
int main() {
	int ans=0;
	for (int i=100;i<1000;i++) {
		if (i/100+i/10%10+i%10==5) {
			ans++;
		}
	}
	cout<<ans;
}