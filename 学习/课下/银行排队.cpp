#include <iostream>
using namespace std;
int main() {
	for (int a=0;;a++) {
		int n,m;
		cin>>n>>m;
		int ans1[n];
		memset(ans1, 0,sizeof(ans1));
		int ans2[m];
		int ans3[m];
		int sum=0;
		for (int i=0;i<m;i++) {
			cin>>ans2[i];
			cin>>ans3[i];
		}
		
		for (int i=0;i<m;i++) {
			
			int s=0;
			for (int j=0;j<n;j++) {
				if (j!=0) {
					ans1[j]-=ans2[i]-ans2[i-1];
				}
				if (ans1[i]<0) {
					ans1[i]=0;
				}
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
			ans1[s]-=ans2[i];
			
		}
		
		printf("%.2lf",(sum*1.00)/(n*1.00));
	}
	
	
	return 0;
}