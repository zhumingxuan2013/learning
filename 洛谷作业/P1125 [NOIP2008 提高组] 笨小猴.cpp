#include <iostream>
#include <algorithm>
using namespace std;
int prime_num(int num){
	int i;
	if (num==0||num==1) {
		return 0;
	}
	for(i = 2; i <= num / 2; i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int a[24];
	for (int i=0; i<24; i++) {
		a[i]=0;
	}
	string b;
	cin>>b;
	for (int i=0;i<b.size();i++ ) {
		a[b[i]-'a'-1]++;
	}
	sort(a, a+24);
	int l;
	for (int i=0; i<24; i++) {
		if (a[i]!=0) {
			l=i;
			break;
		}
	}
	if (prime_num(a[23]-a[l])) {
		cout<<"Lucky Word\n"<<a[23]-a[l];
	}else {
		cout<<"No Answer\n0";
	}
	return 0;
}