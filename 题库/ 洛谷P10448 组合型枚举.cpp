#include <iostream>
using namespace std;
int a[100],n,k;

void dfs(int step,int l){
	if (step==k+1) {
		for (int i=1; i<=k; i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	
		for (int i=l; i<=n-k+step; i++) {
			a[step]=i;
			dfs(step+1,i+1);
	
		}
	
	
}
int main() {
	cin>>n>>k;
	dfs(1,1);
	return 0;
}