#include <iostream>

using namespace std;
bool a(int i){
	if (i==1) {
		return false;
	}
	for (int j=2; j<i; j++) {
		if (i%j==0) {
			
			return false;
		}
	}
	return true;
}
int main() {
	int p;
	cin>>p;
	int o=0;
	for(int i=2;i<=p;i++){
		if (a(i)) {
			cout<<i<<" ";
			o++;
		}
	
	}
	cout<<"有"<<o<<"个";
	return 0;
	
}