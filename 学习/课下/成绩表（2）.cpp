#include <iostream>

using namespace std;
int main() {
	string a[6]{"李明\t","王涛\t","周磊\t","丁芳华","刘子一","林立伟"},b[5]{"语文","数学","英语","物理","化学"};
	int c[6][5];
	for (int i=0; i<6; i++) {
		for (int j=0; j<5; j++){
			cin>>c[i][j];
		}
	}
	cout<<"\t\t";
	for (int i=0; i<5; i++) {
		cout<<b[i]<<"\t\t";
	}
	cout<<endl;
	for (int i=0; i<6; i++) {
		cout<<a[i]<<"\t";
		for (int j=0; j<5; j++){
			
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}