#include <iostream>

using namespace std;
int main() {
	int a[4][5];
	for (int i=0; i<4; i++) {
		for (int j=0; j<5; j++) {
			cin>>a[i][j];
		}
	}
	string b{"\t数学\t物理\t化学\t英语\tc++\n"};
	cout<<b;
	for (int i=0; i<4; i++) {
		cout<<i+101<<"\t";
		for (int j=0; j<5; j++) {
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}