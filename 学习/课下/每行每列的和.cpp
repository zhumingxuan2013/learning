#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int c[a][b],d[a],e[b];
	memset(d, 0, sizeof(d));
	memset(e, 0, sizeof(e));
	for (int i=0; i<a; i++) {
		for (int j=0; j<b; j++) {
			cin>>c[i][j];
			d[i]+=c[i][j];
			e[j]+=c[i][j];
		}
	}
	for (int i=0; i<a; i++) {
		cout<<d[i]<<"\t";
	}
	cout<<endl;
	for (int i=0; i<b; i++) {
		cout<<e[i]<<"\t";
	}
}