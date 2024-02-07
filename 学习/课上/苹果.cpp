#include <iostream>

using namespace std;
int main() {
	int day=0,ans=0,n,t;
	cin>>n;
	int k=n;
	while (k>0) {
		day++;
		if ((k-1)%3==0&&ans==0) {
			ans=day;
		}
		t=(k-1)/3+1;
		k-=t;
	}
	cout<<day<<" "<<ans;
	
}