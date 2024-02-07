#include <iostream>

using namespace std;
int main() {
	int a[2][3][3],b[2][3]{};
	for (int i=0; i<2; i++) {
		for (int j=0; j<3; j++) {
			for (int k=0; k<3; k++) {
				cin>>a[i][j][k];
				b[i][j]+=a[i][j][k];}
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
}