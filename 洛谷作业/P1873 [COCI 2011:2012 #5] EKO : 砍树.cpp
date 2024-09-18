#include <iostream>
using namespace std;

int n,m;

int s[1000001];

int main() {
	scanf("%d%d",&n,&m); 
    int l=0,r=0,mid=2e9+7;

    for (int i=1; i<=n; i++) {
        scanf("%d",&s[i]);
        r=max(r,s[i]);
    }
    while (l<=r) {
        mid=(l+r+1)/2;
        long long ans=0;
        for (int i=1; i<=n; i++) {
            ans+=max(0,s[i]-mid);
        }
        
        if (ans<m) {
            r=mid-1;
        }else {
            l=mid+1;
        }
    }
    printf("%d",l-1);
	return 0;
}