#include <iostream>

using namespace std;
int main() {
	
	int a[3]; 
	cin >> a[0]>>a[1]>>a[2];
	int sum = 0;
	
	for(int i = 0; i < 3; i++){
	
		if(a[i]>a[i+1]&&i<2){
			sum=a[i];
			a[i]=a[i+1];
			a[i+1]=sum;
		}
	}
	for (int i=0; i<3; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
	
}