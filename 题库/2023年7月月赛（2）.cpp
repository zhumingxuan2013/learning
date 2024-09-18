#include <iostream>

using namespace std;
int main() {
	int z=0;
	int a,b;
	cin>>a>>b;
	int c[a][b];
	for (int i=0; i<a; i++) {
		for (int j=0; j<b; j++) {
			cin>>c[i][j];
		}
	}
	int d=max(a, b);
	for (int i=1; i<=d; i++) {
		for (int j=0; j<a-i+1; j++) {
			for (int k=0; k<b-i+1; k++) {
				int ans=0;
				for (int m=0;m<i; m++) {
					for (int n=0; n<i; n++) {
						if (c[j+m][k+n]==1) {
							ans++;
						}
						if (ans==i*i) {
							z++;
						}
					}
				}
			}
		}

	}
	cout<<z;
}