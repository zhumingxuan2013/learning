#include <iostream>
using namespace std;
long long pr[100000101],g;
bitset<100000001> ans;
void p(long long n){
    for(long long i=2; i<=n; i++){
        if(ans[i]==0){
            pr[++g]=i;
            for(long long j=2; i*j<=n; j++)
                ans[i*j]=1;
        }
    }
    return;
}
int main() {
	long long n,m,k=0;
    scanf("%lld", &n);
    p(n);
    while(pr[k+1]!=0){
        k++;
        printf("%lld ", pr[k]);
    }
	return 0;
}