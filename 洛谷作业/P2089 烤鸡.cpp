#include <iostream>
using namespace std;
int a[10],n,cnt;
void d(int s){
	if (s==10) {
		int nn=0;
		for (int i=0; i<10; i++) {
			nn+=a[i];
		}
		if (nn==n) {
			for (int i=0; i<10; i++) {
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		return ;
	}
	for (int i=1;i<4;i++) {
		a[s]=i;
		d(s+1);
	}
	return ;
}
void e(int s){
	if (s==10) {
		int nn=0;
		for (int i=0; i<10; i++) {
			nn+=a[i];
		}
		if (nn==n) {
			cnt++;
		}
		return ;
	}
	for (int i=1;i<4;i++) {
		a[s]=i;
		e(s+1);
	}
	return ;
}
int main() {
	cin>>n;
	e(0);
	cout<<cnt<<endl;
	d(0);
	return 0;
}