#include <iostream>

using namespace std;


int main() {
	int a,b;
	cin>>a>>b;
	char c[a][b];
	for (int i=0;i<a;i++) {
		for (int j=0; j<b; j++) {
			cin>>c[i][j];
		}
	}
	for (int i=0;i<a;i++) {
		for (int j=0; j<b; j++) { 
			if (c[i][j]=='?') {
				c[i][j]='0';
				int ans=0;
				if (i+1!=0) {
					if (c[i+1][j]=='*') {
						c[i][j]++;
					}
				}
				if (i-1!=0) {
					if (c[i-1][j]=='*') {
						c[i][j]++;
					}
				}
				if (j-1!=0) {
					if (c[i][j-1]=='*') {
						c[i][j]++;
					}
				}
				
				if (j+1!=0) {
					if (c[i][j+1]=='*') {
						c[i][j]++;
					}
				}
				if (j+1!=0&&i-1!=0) {
					if (c[i-1][j+1]=='*') {
						c[i][j]++;
					}
				}
				if (j+1!=0&&i+1!=0) {
					if (c[i+1][j+1]=='*') {
						c[i][j]++;
					}
				}
				if (j-1!=0&&i+1!=0) {
					if (c[i+1][j-1]=='*') {
						c[i][j]++;
					}
				}
				if (j-1!=0&&i-1!=0) {
					if (c[i-1][j-1]=='*') {
						c[i][j]++;
					}
				}
			}
		}}
		for (int i=0;i<a;i++) {
			for (int j=0; j<b; j++) {
				cout<<c[i][j]<<"\t";
			}
			cout<<endl;
		}
	
}