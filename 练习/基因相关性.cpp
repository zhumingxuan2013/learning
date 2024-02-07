#include <iostream>
using namespace std;
int main() {
	string a,b;
	double z;
	cin>>z>>a>>b;
	int q=a.size();
	int y=0;
	for (int i=0; i<q; i++) {
		if (a.substr(i,1)!=b.substr(i,1)) {
			y++;
		}
	}
	double w=y*1.00/q*1.00;
	if(y!=0){
		if (w>z) {
			cout<<"YES";
		}
		else {
			cout<<"NO";
		}
	}else{
		cout<<"YES";
	}
	return 0;
}