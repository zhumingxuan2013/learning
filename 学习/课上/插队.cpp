#include <iostream>
using namespace std;
int main() {
	int a,ans;
	cin>>a;
	int b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
	}
	cin>>ans;
	for (int i=0; i<a-1; i++) {
		if (i==ans-1) {
			cout<<b[a-1]<<" ";
		}
		cout<<b[i]<<" ";
	}
	return 0;
}