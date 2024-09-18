#include<iostream>
using namespace std;
const int N=1005;
int a[N],b[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	while((cin>>n>>m)){
		for (int i=1;i<=n;i++)cin>>a[i];
		for (int i=1;i<=m;i++)cin>>b[i];
		int ans1=INT_MAX,ans2=INT_MAX,flag=false;
		for (int i=2;i<=(n+m)*10;i++)
		{
			int sum1=0,sum2=INT_MAX;
			for(int j=1;j<=n;j++)
			{
				if(a[j]%i)sum1=max(sum1,a[j]%i);
				else sum1=max(sum1,i);			}
			for(int j=1;j<=m;j++)
			{
				if(b[j]%i)sum2=min(sum2,b[j]%i);
				else sum2=min(sum2,i);
			}
			if(sum1>=sum2)continue;
			flag=true;
			sum2=i-sum1;
			if(ans1!=sum1){
				if(ans1>sum1)ans1=sum1,ans2=sum2;
			}
			else{
				if(ans2>sum2)ans1=sum1,ans2=sum2;
			}
		}
		if(flag)cout<<ans1<<" "<<ans2<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}