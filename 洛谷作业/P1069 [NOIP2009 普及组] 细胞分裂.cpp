#include <iostream>
#define zikun999 cin>>n>>a>>b;for (int i=1;i<=n;i++) cin>>s[i];if (a==1) {cout<<0<<endl;return 0;}while(a!=1){while (!(a%t)) a/=t,z[t]++;m=max(m,t);z[t++]*=b;}for (int i=1;i<=n;i++){l=0;for (int j=2;j<=m;j++){    if (!z[j]) continue;    c=0;    while (s[i]%j==0){ s[i]/=j;c++;}    if (0==c) {l=1000000000;break;}    l=max(l,(z[j]-1)/c);}sum=min(sum,l+1);}cout<<(sum==1000000000?-1:sum);
using namespace std;
int n,a,b,s[10001],z[10001]={0},m,t=2,c,sum=1000000000,l;
int main(){
zikun999
    return 0;
}