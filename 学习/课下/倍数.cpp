#include <iostream>
using namespace std;
bool a(int n){
	int ans[9]{};
	for (int i=1; i<4; i++) {
		ans[i*n%10-1]=1;
		ans[i*n/10%10-1]=1;
		ans[i*n/100%10-1]=1;
	}
	for (int i=0; i<9; i++) {
		if (ans[i]!=1) {
			return false;
		}
	}
	return true;
}
int main() {
	for (int i=100; i<1000/3; i++) {
		if (a(i)) {
			cout<<i<<" "<<i*2<<" "<<i*3<<endl; 
		}
	}
}