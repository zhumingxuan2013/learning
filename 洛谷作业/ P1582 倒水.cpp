#include <iostream>
int n,k,sum;
int main() {
    scanf("%d%d",&n,&k);
    while(__builtin_popcount(n)>k)sum+=n&-n,n+=n&-n;
    printf("%d",sum);
}