#include<iostream>
#include<algorithm>
using namespace std;
int i,n,m,f,k[5001],s[5001],a[5001];
bool cmp(int a,int b){
    if(s[a]==s[b])return k[a]<k[b];
    return s[a]>s[b];
}
int main(){
    cin>>n>>m;
    for(i=1;i<=n;i++)cin>>k[a[i]=i]>>s[i];
    sort(a+1,a+n+1,cmp);
    f=s[a[m*15/10]];
    for(i=1;s[a[i]]>=f;i++);
    cout<<f<<" "<<i-1<<endl;
    for(i=1;s[a[i]]>=f;i++)cout<<k[a[i]]<<" "<<s[a[i]]<<endl;
}