#include <iostream>
using namespace std;
int ans[101];

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	for (int i=1; i<=a; i++) {
		for (int j=1; j<=b; j++) {
			for (int k=1; k<=c; k++) {
				ans[i+j+k]++;
			}
		}
	}
	int s=100;
	for (int i=100; i>=1; i--) {
		if (ans[s]<=ans[i]) {
			s=i;
		}
	}
	cout<<s;
	return 0;
}