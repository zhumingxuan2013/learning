#include<iostream>
#include<cstdio>
#define f(i,j,k) for(i=j;i<=k;i++)
using namespace std;
int n,m,ans,whe[25][25],time1[25][25],num[405],kun[405],la[25],i,j; 
bool vis[25][10005];
int main(){
    cin>>m>>n;
    f(i,1,n*m) cin>>num[i];
    f(i,1,n) f(j,1,m) cin>>whe[i][j];
    f(i,1,n) f(j,1,m) cin>>time1[i][j];
    f(i,1,n*m){kun[num[i]]++;int p1=num[i],p2=kun[num[i]],w=whe[p1][p2],t=time1[p1][p2],res=0;f(j,la[p1]+1,10000){if(vis[w][j]) res=0;else res++;if(res==t) break;}int tmp=j;f(j,tmp-t+1,tmp) vis[w][j]=1;la[p1]=tmp;ans=max(ans,la[p1]);}
    cout<<ans;
    return 0;
}