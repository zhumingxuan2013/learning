#include<iostream>
using namespace std;
int main(){
	for(int n=0;n<200000;n++){
		int m=0;
		int n2=n;
		while(n2){
			int k=n2%10;
			m+=k*n;
			if(m%10!=k){
				break;
			}
			m/=10;
			n2/=10;
		}
		if(n2==0){
			cout<<n<<endl;
		}
	}
	
}
