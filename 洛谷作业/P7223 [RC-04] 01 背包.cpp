#include <iostream>
#include <cstdio>
using namespace std;
long long mod=998244353;

long long p(long long o,long long n,long long k)
{
	o%=k;
	long long m=1;
	while(n>0){
		if(n & 1){
		    m=m*o%k;
		}
		o=o*o%k;
		n>>=1;
	}
	return m%k;
}
int main() {
long long o,l,sum=1;
	cin>>o>>l;
	long long a[1000000];
	for (long long i=1;i<=o;i++ ) {
		cin>>a[i];
	}
	for (long long i=1;i<=o;i++ ) {
		sum*=(p(l,a[i],mod)%mod+1);
		sum%=mod;
	}
	cout<<sum%mod;
}