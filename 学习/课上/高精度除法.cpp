#include <iostream>
using namespace std;
int main() {
	string as;
	int c[100];
	memset(c, 0, sizeof(c));
	
	int ans=0;
	int b;
	cin>>as>>b;
	int a[100];
	memset(a, 0, sizeof(a));

	a[0]=as.size();
	for (int i=0; i<a[0]; i++) {
		a[i+1]=as[i]-'0';
	}
	for(int i=1;i<=a[0];i++) {
		c[i]=(ans*10+a[i])/b;
		ans=(ans*10+a[i])%b;
	}
	int lenc=1;
	while (c[lenc]==0&&lenc<a[0]) {
		lenc++;
	}
	for (int i=lenc; i<=a[0]; i++) {
		cout<<c[i];
	}
	if (ans!=0) {
		cout<<"······"<<ans;
	}
	return 0;
}