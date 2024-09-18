#include<iostream>
#define ll long long
using namespace std;
const int N=2.5e6+114514+1919810;
int l=1,n1,n2,n,nn1,nn2;
ll t,m,ans=0,a[N],b[N],c[N],d[N];
void Mr_Huang(int x,ll y,int z,ll p[],ll q[],int &zikun999){
     if(y>m) return;
     if(x>z){p[++zikun999]=y; return;}
     Mr_Huang(x+1,y,z,p,q,zikun999),Mr_Huang(x+1,y+q[x],z,p,q,zikun999);
}
int main(){
    cin>>n>>m;
    n1=(n>>1),n2=n-n1;
    for(int i=1;i<=n1;i++) cin>>a[i];
    for(int i=1;i<=n2;i++) cin>>b[i];
    Mr_Huang(1,0,n1,c,a,nn1),sort(c+1,c+nn1+1);
    Mr_Huang(1,0,n2,d,b,nn2),sort(d+1,d+nn2+1);
    for(int i=nn2;i>=1;--i){t=m-d[i];while(l<=nn1&&c[l]<=t) ++l;ans+=1ll*(l-1);} 
    cout<<ans;

} 