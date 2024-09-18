#include <iostream>
using namespace std;
int n[21][21][21],cnt;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int q;
	cin>>q;
	for (int d=0;d<q; d++) {
		int r,t,y,u,o,p;
		cin>>r>>t>>y>>u>>o>>p;
		for (int i=r; i<=u; i++) {
			for (int j=t; j<=o; j++) {
				for (int k=y; k<=p; k++) {
					n[i][j][k]=1;
				}
			}
		}
		
	}
	for (int i=1; i<=a; i++) {
		for (int j=1; j<=b; j++) {
			for (int k=1; k<=c; k++) {
				if (n[i][j][k]==0) {
					cnt++;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}