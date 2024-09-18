#include<iostream>
#define f for(int i=1;i<=n;i++)
using namespace std;
int n,w,ans,a[300005][2];
int main(){
	cin>>n>>w;
	if(n==1){cout<<n-1;exit(0);}
	f cin>>a[i][0];
	ans=n;
	for(int k=0;1+(n-1)*k<=w;k++){
		f if(a[i][0]-k*(i-1)>0&&a[i][0]-k*(i-1)+(n-1)*k<=w) a[a[i][0]-k*(i-1)][1]++,ans=min(ans,n-a[a[i][0]-k*(i-1)][1]);
		f if(a[i][0]-k*(i-1)>0) a[a[i][0]-k*(i-1)][1]=0;
	}
	cout<<ans;
 	return 0;
}