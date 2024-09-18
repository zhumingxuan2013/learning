#include <iostream>
using namespace std;
string ans[10][5];

int main() {
	ans[0][0]="XXX";
	ans[0][1]="X.X";
	ans[0][2]="X.X";
	ans[0][3]="X.X";
	ans[0][4]="XXX";
	ans[1][0]="..X";
	ans[1][1]="..X";
	ans[1][2]="..X";
	ans[1][3]="..X";
	ans[1][4]="..X";
	ans[2][0]="XXX";
	ans[2][1]="..X";
	ans[2][2]="XXX";
	ans[2][3]="X..";
	ans[2][4]="XXX";
	ans[3][0]="XXX";
	ans[3][1]="..X";
	ans[3][2]="XXX";
	ans[3][3]="..X";
	ans[3][4]="XXX";
	ans[4][0]="X.X";
	ans[4][1]="X.X";
	ans[4][2]="XXX";
	ans[4][3]="..X";
	ans[4][4]="..X";
	ans[5][0]="XXX";
	ans[5][1]="X..";
	ans[5][2]="XXX";
	ans[5][3]="..X";
	ans[5][4]="XXX";
	ans[6][0]="XXX";
	ans[6][1]="X..";
	ans[6][2]="XXX";
	ans[6][3]="X.X";
	ans[6][4]="XXX";
	ans[7][0]="XXX";
	ans[7][1]="..X";
	ans[7][2]="..X";
	ans[7][3]="..X";
	ans[7][4]="..X";
	ans[8][0]="XXX";
	ans[8][1]="X.X";
	ans[8][2]="XXX";
	ans[8][3]="X.X";
	ans[8][4]="XXX";
	ans[9][0]="XXX";
	ans[9][1]="X.X";
	ans[9][2]="XXX";
	ans[9][3]="..X";
	ans[9][4]="XXX";
	int a;
	cin>>a;
	int b[a];
	for (int i=0; i<a; i++) {
		char p;
		cin>>p;
		b[i]=p-'0';
	}
	
	for (int i=0; i<5; i++) {
		for (int j=0; j<a-1; j++) {
			cout<<ans[b[j]][i]<<".";
		}
		cout<<ans[b[a-1]][i]<<endl;
	}
	
	
	return 0;
}