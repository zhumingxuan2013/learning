#include <iostream>

using namespace std;
bool issushu(long long j){
	for (int i = 2; i <= j / i; i ++) {
		if (j % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int a[1000],b[1000],k=0;
	for (int i=0;i<=1993;i++) {
		if (issushu(i)){a[++k]=i;		
		}
	}
	for(int i=0;i<k-1;i++)b[i]=a[i+1]-a[i];
	for(int i=0;i<k-1;i++){
		int t=0,flag=0,sub=0;
		for(int j=i;j<k-1;j++){
			t+=b[j];
			if(t>1898){
				flag=0;
				break;
			}
			if (t==1898) {
				flag=1;
				sub=j;
				break;
			}
		}
		if(flag==1){
			for(int j=i;j<sub;j++){
				cout<<a[j]<<" ";
			}
			cout<<a[sub+1]<<endl;
		}
	
	}
	
}