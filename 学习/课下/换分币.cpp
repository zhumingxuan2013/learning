#include <iostream>
using namespace std;
int main() {
	int ans=0;
	for (int i=0; i*5<=100; i++) {
		for (int j=0; j*2+i*5<=100; j++) {
			cout<<endl;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}