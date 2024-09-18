#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int x[2001],zx[2001],y[2001],zy[2001],kx[1001],ky[1001],z[1001],b[1001],t=0;
void chai(int a[],int h){int max,c;t=0;memset(b,0,sizeof(b));while(h>0){max=0;for(int i=1;i<=1000;i++)if(!b[i]&&a[i]>max)  { max=a[i]; c=i;}if(max==0)break;b[c]=1;z[++t]=c;h--;}}
int main(){
    int m,n,k,l,d,i;scanf("%d%d%d%d%d",&m,&n,&k,&l,&d);for(i=1;i<=d;i++)scanf("%d%d%d%d",&x[i],&y[i],&zx[i],&zy[i]); for(i=1;i<=d;i++){if(x[i]!=zx[i])kx[min(x[i],zx[i])]++;  else ky[min(y[i],zy[i])]++;}chai(kx,k);sort(z+1,z+t+1);for(i=1;i<=t;i++) cout<<z[i]<<" ";cout<<endl;chai(ky,l);sort(z+1,z+t+1);for(i=1;i<=t;i++) cout<<z[i]<<" ";
    return 0;
}