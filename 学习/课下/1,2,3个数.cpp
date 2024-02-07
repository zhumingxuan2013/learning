#include <iostream>

using namespace std;
int find1(int n){
	int a=n,ans=0;
	while (a) {
		if (a%10==1){
			ans++;
			a/=10;
		}else {
			a/=10;
		}
	}
	return ans;
}
int find2(int n){
	int a=n,ans=0;
	while (a) {
		if (a%10==2){
			ans++;
			a/=10;
		}else {
			a/=10;
		}
	}
	return ans;
}
int find3(int n){
	int a=n,ans=0;
	while (a) {
		if (a%10==3){
			ans++;
			a/=10;
		}else {
			a/=10;
		}
	}
	return ans;
}
int main() {
	int n;
	cin>>n;
	cout<<1<<":"<<find1(n)<<"\n";
	cout<<2<<":"<<find2(n)<<"\n";
	cout<<3<<":"<<find3(n)<<"\n";
}