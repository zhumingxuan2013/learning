#include <iostream>

using namespace std;
int x(int n,int m){
	if (n<m) {
		int i=m;
		m=n;
		n=i;
	}
	int r=n%m;
	while (r) {
		n=m;
		m=r;
		r=n%m;
	}
	return m;
}
int main() {
	for (int i=1; i<=40; i++) {
		for (int j=1; j<i; j++) {
			if (x(i, j)) {
				cout<<j<<"/"<<i<<" ";
			}
		}
	}
}