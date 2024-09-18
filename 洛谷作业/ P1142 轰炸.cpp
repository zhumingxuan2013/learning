#include <iostream>
#include <algorithm>
using namespace std;
int n,sum,sum2,ans;
double v[701][701],x[701],y[701];
int main(){
    cin>>n;
    for (int i=1;i<=n;i++) cin>>x[i]>>y[i];
    for (int i=1;i<=n;i++)for (int j=1;j<=n;j++)if (i!=j)v[i][j]=(y[i]-y[j])/(x[i]-x[j]);
    for (int i=1;i<=n;i++)sort(v[i]+1,v[i]+n+1);
    for (int i=1;i<=n;i++){sum=sum2=0;for (int j=3;j<=n;j++){if (v[i][j]==v[i][j-1]) sum++,sum2=max(sum,sum2);else sum=0;}sum=max(sum,sum2),ans=max(ans,sum);}
    cout<<ans+2;
}