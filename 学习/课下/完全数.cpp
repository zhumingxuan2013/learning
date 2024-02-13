#include <iostream>

using namespace std;
void wanqvanshu(int a){
	int ans=0;
	for (int i=1;i<a;i++) {
		if (a%i==0) {
			ans+=i;
		}
	}
	if (ans==a) {
		cout<<"yes";
	}else {
		cout<<"no";
	}
	
}
int main() {
	int a;
	cin>>a;
	wanqvanshu(a);
}