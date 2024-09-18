#include <iostream>
using namespace std;
bool m(int k){
	int x=k;
	int ans[6]={0,0,0,0,0,0};
	for(int i=0;i<6;i++){
		ans[5-i]=x%10;
		x/=10;
	}
	for (int i=0; i<6; i++) {
		if (ans[i]!=0&&k%ans[i]!=0) {
			return false;
		}
	}
	return true;
}
int main() {
	int a,b,cnt=0;
	cin>>a>>b;
	for (int i=a; i<=b; i++) {
		if (m(i)) {
			cnt=1;
			cout<<i<<" ";
		}
	}
	if (cnt==0) {
		cout<<-1;
	}
	return 0;
}