#include <iostream>
#include <cmath>
using namespace std;
bool zhishu(int b){
	if (b==1) {
		return false;
	}
	else {
		for (int i=2; i<sqrt(b); i++) {
			if (b%i==0) {
				return false;
			}
		}
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	
	long long factorCount = 1;
	for(long long i = 2; i * i * i * i * i * i<= n; ++i){
		if(n%i == 0){
			long long exp = 0;
			while(n % i == 0){
				 exp++;
				n /= i;
			}
			factorCount *= (exp+1);
		}
	}
	if(n > 1){
		factorCount *= 2;
	}
	
	if (zhishu(factorCount)) {
		cout<<"T";
	}
	else {
		cout<<"F";
	}
}