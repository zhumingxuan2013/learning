#include <iostream>

using namespace std;
int No[11]{6,2,5,5,4,5,6,3,7,6},n,cnt;
int b(int x){
	if (x==0) {
		return No[0];
	}
	int ans=0;
	while(x!=0)
		{
			int t=x%10;
			ans+=No[t];
			x/=10;
		}
	return ans;
}
int main() {
	cin>>n;
	for (int i=0; i<=1000; i++) {
		for (int j=0; j<=1000; j++) {
			if (b(i)+b(j)+b(i+j)+4==n) {
				cnt++;
			}
		}
	}
	cout<<cnt;
}