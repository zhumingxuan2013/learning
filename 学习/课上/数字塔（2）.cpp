#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	int b[a][a];
	
	for (int i=0; i<a; i++) {
		for (int j=0; j<=i; j++) {
			cin>>b[i][j];
		}
	}
	for (int i=a-2; i>=0; i--) {
		for (int j=0; j<=i; j++) {
			b[i][j]+=max(b[i+1][j], b[i+1][j+1]);
		}
	}
	cout<<b[0][0];
	return 0;
}