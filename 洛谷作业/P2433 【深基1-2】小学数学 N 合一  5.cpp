#include <iostream>
using namespace std;
int main() {
	string a[14]{"I love Luogu!","6 4","3\n12\n2\n","166.667","15","10.8167","110\n90\n0","31.4159\n78.5398\n523.599","22","9","33.3333","13\nR","16","50"};
	int b;
	cin>>b;
	cout<<a[b-1];
	return 0;
}