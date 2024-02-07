#include <iostream>

using namespace std;
int main() {
	int ans=0;
	for (int i=10006; i<100000; i+=10) {
		if (i%3==0) {
			ans++;
		}
	}
	cout<<ans;
}