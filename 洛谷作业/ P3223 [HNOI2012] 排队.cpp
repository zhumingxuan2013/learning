#include<iostream>
using namespace std;
int n,m;
int s=1;
long long ans[10086],f1,f2;

int main(){
    ans[1]=1;
    cin>>n>>m;
    int x=n*n+n*3+2*m;
    for(int i=1;i<=s;i++){
        f1=(ans[i]*x);
        ans[i]=f1%1000000000000000+f2;
        f2=f1/1000000000000000;
    }
    if(f2)ans[++s]=f2;
    for(int i=1;i<=n+1;i++){
        int x=i;
        f2=0;
        for(int i=1;i<=s;i++){
            f1=(ans[i]*x);
            ans[i]=f1%1000000000000000+f2;
            f2=f1/1000000000000000;
        }
        if(f2)ans[++s]=f2;
    }

    for(int i=n-m+4;i<=n+2;i++){
        int x=i;
        f2=0;
        for(int i=1;i<=s;i++){
            f1=(ans[i]*x);
            ans[i]=f1%1000000000000000+f2;
            f2=f1/1000000000000000;
        }
        if(f2)ans[++s]=f2;
    }
    cout<<ans[s];
    while(--s)printf("%.15lld",ans[s]);
    return 0;
}