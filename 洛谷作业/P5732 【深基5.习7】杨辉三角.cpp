#include <iostream>

using namespace std;
int main() {
	int a;
	cin>>a;
	
	int b[100][100]={0};

	for (int i=0; i<a; i++) {
		for (int j=0; j<=i; j++) {
			if (j==0||j==i) {
				b[i][j]=1;
				cout<<b[i][j]<<" ";
			}
			
			else {
				b[i][j]=b[i-1][j]+b[i-1][j-1];
				cout<<b[i][j]<<" ";

			}
		}
		cout<<endl;
	}
}