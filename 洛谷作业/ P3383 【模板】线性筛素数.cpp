#include <iostream>
using namespace std;
int pr[100000101],g;
bitset<100000001> ans;
void p(int n){
    for(int i=2; i<=n; i++){
        if(ans[i]==0){
            pr[++g]=i;
            for(int j=2; i*j<=n; j++)
                ans[i*j]=1;
        }
    }
    return;
}
int main() {
	int n,m;
    scanf("%d%d", &n,&m);
    p(n);
    while(m){
        m--;
        int k;
        scanf("%d", &k);
        printf("%d\n", pr[k]);
    }
	return 0;
}