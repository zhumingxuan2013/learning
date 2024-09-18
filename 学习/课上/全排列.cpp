#include <iostream>
using namespace std;
int a[100],b[100],n,k;

void dfs(int step){
	if (step==k+1) {
		for (int i=1; i<=k; i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	
		for (int i=1; i<=n; i++) {
			if (0==b[i]) {
				b[i]=1;
				a[step]=i;
				dfs(step+1);
				b[i]=0;
				a[step]=0;
			}
		}
	
	
}
int main() {
	cin>>n>>k;
	dfs(1);
	return 0;
}