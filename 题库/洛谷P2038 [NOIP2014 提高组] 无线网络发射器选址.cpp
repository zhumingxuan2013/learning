#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;
int a[129][129];
int d,k=0;
bool cmp(int x,int y){
	return x<y;
}
long long sum(int x,int y){
	long long ans=0;
	for (long long i=max(x-d,0); i<=min(x+d,128); i++) {
		for (long long j=max(y-d,0); j<=min(y+d,128); j++) {
			ans+=a[i][j];
		}
	}
	return ans;
}

int main() {
	cin>>d;
	int n;
	cin>>n;
	for (long long i=0; i<n; i++) {
		long long x,y;
		cin>>x>>y;
		long long z;
		cin>>z;
		a[x][y]=z;
	}
	int ans[128*128+1000];
	
	memset(ans, 0, sizeof(ans));
	for (long long i=0; i<=128; i++) {
		for (long long j=0; j<=128; j++) {
			if(sum(i,j)){
				ans[k]=sum(i, j);
				k++;
				
			}
		}
	}
	sort(ans, ans+k,cmp);
	long long sum=1;
	for (long long i=k-1; i>0; i--) {
		if (ans[i]==ans[i-1]) {
			sum++;
		}else {
			break;
		}
	}

	cout<<sum<<" "<<ans[k-1];
	return 0;
}