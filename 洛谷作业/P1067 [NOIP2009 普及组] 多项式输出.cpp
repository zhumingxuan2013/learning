#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	for (int i=a; i>=0; i--) {
		int x;
		cin>>x;
		if(x==0)continue;
		if(x==-1&&i==0){
			cout<<"-1";
			return 0;
		}

		if (x>0&&i!=a) {
			cout<<"+";
		}
		if (x!=1&&x!=-1) {
			cout<<x;
		}
		if (x==-1&&i!=1) {
			cout<<'-';
		}
		if (x==1&&i==0) {
			cout<<'1';
		}
		if (i!=0&&i!=1) {
			cout<<"x^"<<i;
		}
		if (i==1) {
			cout<<'x';
		}
	}
	return 0;
}