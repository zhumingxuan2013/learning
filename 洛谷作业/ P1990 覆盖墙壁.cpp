#include<iostream>
using namespace std;

const int mod=10000;

int b[1000005],c[1000005];

int main(){
	int n;
	cin>>n;
	b[0]=1;	
	b[1]=c[1]=1;
	
	for(int i=2;i<=n;i++){
		b[i]=((b[i-1]+b[i-2])%mod+2*c[i-2]%mod)%mod;
		c[i]=(c[i-1]+b[i-1])%mod;
	}
	
	cout<<b[n];
	
	return 0;
}