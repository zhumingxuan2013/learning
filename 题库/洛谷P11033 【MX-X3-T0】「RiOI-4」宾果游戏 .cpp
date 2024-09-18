#include <iostream>
using namespace std;
int main() {
	int a[5][5];
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin>>a[i][j];
		}int f=1;
		for (int j=1; j<5; j++) {
			if(!(a[i][j]==a[i][j-1]&&a[i][j]!=0))f=0;
		}
		if (f) {
			cout<<"Yes";return 0;
		}
	}
	for (int i=0; i<5; i++) {
		int f=1;
		for (int j=1; j<5; j++) {
			if(!(a[j][i]==a[j-1][i]&&a[j][i]!=0))f=0;
		}
		if (f) {
			cout<<"Yes";return 0;
		}
	}
	if(a[0][0]==a[1][1]&&
		a[1][1]==a[2][2]&&
		a[2][2]==a[3][3]&&
		a[3][3]==a[4][4]&&a[0][0]!=0
	){cout<<"Yes";return 0;}
	if(a[0][4]==a[1][3]&&
		a[1][3]==a[2][2]&&
		a[2][2]==a[3][1]&&
		a[3][1]==a[4][0]&&a[0][4]!=0
	){cout<<"Yes";return 0;}
	cout<<"No";
	return 0;
}