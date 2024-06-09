#include <iostream>
#include<algorithm>

using namespace std;
int main() {
	int a;
	cin>>a;
	int b[a];
	int c[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
		c[i]=b[i];
}
	double n=a;
	double sum=0;
	int ans=0;
	sort(c, a+c);
	int cnt=a-1;
	for (int i=0; i<a; i++) {
		int ans;
		for (int j=0; j<a; j++) {
			if (b[j]==c[i]) {
				ans=j+1;
				b[j]=-1;
				break;
			}
		}
		cout<<ans<<" ";
		sum+=cnt*c[i];
		cnt--;
	}
	cout<<endl;
	printf("%.2lf",sum/n);
	return 0;
}