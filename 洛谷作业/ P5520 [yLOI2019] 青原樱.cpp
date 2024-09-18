#include <iostream>
using namespace std;
long long n,m,p,sum=1;
int main(){
	scanf("%lld%lld%lld%lld",&n,&n,&m,&p);
	for (int i=n-2*m+2;i<=n-m+1;++i) {
		sum=sum*i%p;
	}
	printf("%lld\n",sum);
	return 0;
}