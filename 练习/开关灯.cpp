#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int c[a];
	for (int i=1; i<=a; i++) {
		c[i]=1;
	}

	for (int i=1; i<=a; i++) {
		for (int s=1; s<=b; s++) {
			if (s % i == 0) {
				if (c[s]==0) {
					c[s]=1;
				}else {
					c[s]=0;
				}
			}
		}
	}
	for (int i=1; i <= a; i++) {
		if (c[i]==0) {
			cout << i << " ";
		}
	}

	return 0;
}