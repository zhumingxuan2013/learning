#include <iostream>

using namespace std;
bool issushu(long long j){
	for (int i = 2; i <= j / i; i ++) {
		if (j % i == 0) {
			return false;
		}
	}
	return true;
}
int ssgeshu(int n){
	int ans=0;
	for (int i=2;i<n;i++) {
		if (issushu(i)) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
int a;
int main() {
	cin>>a;
	ssgeshu(a);
}