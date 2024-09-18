#include<iostream>
#include<cmath>
using namespace std;
int x,a[10][2],dy,rp,ans=1e9+7,i,j,n,maxn,maxnjg,t;
int zlr(int xl,int jg,int bt){return (jg-**a+bt)*xl;}
int main(){
    cin>>x;
    while(cin>>a[n][0]>>a[n][1],a[n][0]+1||a[n][1]+1)n++;
    cin>>dy;
    for(rp=-32;rp<=9;rp++,maxn=maxnjg=i=0){for(;i<n-1;i++)for(j=*a[i];j<*a[i+1];j++)if((t=zlr(a[i][1]+(a[i+1][1]-a[i][1])/(*a[i+1]-*a[i])*(j-*a[i]),j,rp))>=maxn)maxn=t,maxnjg=j;for(i=a[n-1][1];i>0;j++,i-=dy)if((t=zlr(i,j,rp))>=maxn)maxn=t,maxnjg=j;if(maxnjg==x&&abs(rp)<abs(ans))ans=rp;}
    if(ans!=1e9+7)cout<<ans;else cout<<"NO SOLUTION";
    return 0;
}
