#include <iostream>

using namespace std;

int main() {
	int a;
	cin>>a;
	int b[a];
	char ans[a];
	for (int i=0;i<a;i++) {
		cin>>b[i];
	}
	for (int i=0;i<a;i++) {
		ans[i]=b[i];
	}
	for (int i=0;i<a;i++) {
		cout<<ans[i];

	}
}