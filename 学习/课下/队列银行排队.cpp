#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<int>ans2;
	queue<int>ans3;
	for (int a=0;;a++) {
		int n,m;
		cin>>n>>m;
		int ans1[n];
		memset(ans1, 0,sizeof(ans1));
		int sum=0;
		int ans[m];
		for (int i=0;i<m;i++) {
			int x;
			cin>>x;
			ans2.push(x);
			cin>>x;
			ans3.push(x);int s=0;
			for (int j=0;j<n;j++) {
				if (j!=0) {
					int s[2];
					s[0]=ans2.front();
					s[1]=ans2.front();
					ans1[j]-=s[0]-s[1];
				}
				ans[j]=ans2.front();
				ans2.pop();
				if (ans1[i]<0) {
					ans1[i]=0;
				}
			}
			for (int j=0; j<n; j++) {
				ans2.push(ans[j]);
			}
			for (int j=0; j<n; j++) {
				if (ans1[j]<ans1[s]) {
					s=j;
				}
			}
			if (ans1[s]<0) {
				ans1[s]=0;
			}
			sum+=ans1[s];
			ans1[s]-=ans2.front();
			ans2.pop();
		}
		printf("%.2lf",(sum*1.00)/(n*1.00));
	}
	return 0;
}