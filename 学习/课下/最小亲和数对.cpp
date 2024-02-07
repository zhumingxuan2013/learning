#include <iostream>
#include <cmath>

using namespace std;
int yinshuhe(int n){
	int ans=0;
	for (int i=1; i<n; i++) {
		if (n%i==0) {
			ans+=i;
		}
	}
		
	
	return ans;
}
int qinheshu(){
	int a=0,n=1,m=1;
	while (!a) {
		for (m=0; m<n; m++) {
			if (yinshuhe(n)==m&&yinshuhe(m)==n) {
				cout<<n<<"\t"<<m<<"\n";
				a=1;
				break;
			}
		}
		n++;
	}
	return 0;
}
int main() {
	qinheshu();
}