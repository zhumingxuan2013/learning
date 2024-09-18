#include<iostream>
using namespace std;
long long ans[201][201]={1},sum[201][201],n,m,kun;
string a,b;
int main(){

    cin>>n>>m>>kun>>a>>b;
    for(int i=1;i<=n;i++)for(int j=m;j>=1;j--)for(int k=kun;k>=1;k--)ans[j][k]=(ans[j][k]+(sum[j][k]=a[i-1]==b[j-1]?sum[j-1][k]+ans[j-1][k-1]:0))%1000000007;
    cout<<ans[m][kun];
}