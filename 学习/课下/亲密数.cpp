#include <iostream>

using namespace std;
int yinshuhe(int a){
	int ans=0;
	for (int i=1;i<a;i++) {
		if (a%i==0) {
			ans+=i;
		}
	}
	return ans;
}
int main() {
	for (int i=1; i<3000; i++) {
		for (int j=1;j<i;j++) {
			if (yinshuhe(i)==j&&yinshuhe(j)==i) {
				cout<<i<<" "<<j<<"\n";
			}
		}
	}
}