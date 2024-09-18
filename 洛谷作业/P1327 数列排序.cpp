#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
map<int,int>w;
int a[100005],b[100005],n,m,cnt,s;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i],w[a[i]]=i;
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)if(a[i]!=b[i])cnt++,s=w[b[i]],w[a[i]]=s,a[s]=a[i];
    cout<<cnt;
}