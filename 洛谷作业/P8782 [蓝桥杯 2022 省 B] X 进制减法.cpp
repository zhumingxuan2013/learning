#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N,Ma,Mb;
ll a[1000009]={0},b[1000009]={0},x[1000009]={1},c[1000009]={0},w[1000009];
ll at=0,bt=0,ans=0,sum,t=0;
signed main()
{
	
	cin>>N;
	cin>>Ma;
	for(int i=Ma;i>=1;i--)
		scanf("%d",&a[i]);
	cin>>Mb;
	for(int i=Mb;i>=1;i--) scanf("%d",&b[i]);
	  
	for(int i=1;i<=max(Ma,Mb);i++)
	 	x[i]=max(a[i],b[i])+1>2?max(a[i],b[i])+1:2;
	
	w[1]=1;
	for(int i=2;i<=max(Ma,Mb);i++)
		w[i]=(w[i-1]*x[i-1])%1000000007;
		
	for(int i=Ma;i>=1;i--){
		at+=a[i]*w[i];at%=1000000007;
	}
	for(int i=1;i<=Mb;i++){
		bt+=b[i]*w[i];
		bt%=1000000007;
	}
	ans=at-bt;
	ans = (ans  + 1000000007) % 1000000007;
	cout<<ans<<endl;
	
			
	return 0;
	 
}



