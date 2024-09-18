#include <iostream>
using namespace std;
#define ll long long
ll n,m,mn;
ll a[100010],s[100010];
int main(){
    cin>>n>>m;
    for (ll i=1;i<=n;i++) {
        cin>>a[i];
        a[i]=a[i]*10000;
        mn=max(mn,a[i]);
    }
    ll l=0,r=mn;
    while (l<=r) {
        int f=0;
        ll mid=(l+r)/2,mn2=0;
        for (int i=1;i<=n;i++) {
            s[i]=s[i-1]+(a[i]-mid);
            if (i>=m) {
                mn2=min(mn2,s[i-m]);
                if (s[i]>mn2) {
                    f=1;
                    break;
                }
            }
        }
        if (f==1) {
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    cout<<l/10<<endl;
    return 0;
}