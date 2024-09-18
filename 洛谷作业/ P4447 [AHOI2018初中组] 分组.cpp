#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
map<int,int>ans;
priority_queue<int,vector<int>,greater<int>>x[100010];
int n,a[100010],minn=1<<30,o;
int main() {
	cin>>n;
	for (int i=1; i<=n; i++) 
		cin>>a[i];
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++){
		if (ans[a[i]]==0) 
			ans[a[i]]=++o;
		if (ans[a[i]-1]==0||x[ans[a[i]-1]].size()==0) 
			x[ans[a[i]]].push(1);
		else {
			int sum=x[ans[a[i]-1]].top()+1;	
			x[ans[a[i]-1]].pop();
			x[ans[a[i]]].push(sum);
		}
	}
	for (int i=1; i<=n; i++)
		if(x[ans[a[i]]].size()>0)
			minn=min(minn,x[ans[a[i]]].top());
	cout<<minn;
	return 0;
}