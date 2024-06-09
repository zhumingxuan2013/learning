#include <iostream>

using namespace std;

int main() {
	int a,b,c,d,e,ans=0;
	cin>>a>>b>>c>>d>>e;
	for (int i=0; i*a<=d; i++) {
		for (int j=0; i*a+j*b<=d; j++) {
			int z=e-i-j;
			if (z/c+i*a+j*b==d&&z%c==0) {
				ans++;
			}
		}
	}
	cout<<ans;
}