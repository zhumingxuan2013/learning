#include <iostream>
using namespace std;

int main() {
	int i;
	cin>>i;
	int s[i];
	for (int p=0; p<i; p++) {
		s[p]=p+1;
	}
	int y=0;
	for (int u=0;u<i;u++) {
		if (s[u]==1) {
			y++;
		}
		if (s[u]!=1) {
			if (s[u]%10==1) {
				y++;
			}
		}
	
		if (s[u]/10%10==1) {
			y++;
		}
		if (s[u]/100%10==1) {
			y++;
		}
		if (s[u]/1000%10==1) {
			y++;
		}
		if (s[u]/10000%10==1) {
			y++;
		}
		if (s[u]/100000%10==1) {
			y++;
		}
		if (s[u]/1000000%10==1) {
			y++;
		}
		if (s[u]/10000000%10==1) {
			y++;
		}
		if (s[u]/100000000%10==1) {
			y++;
		}
		if (s[u]/1000000000%10==1) {
			y++;
		}
	}
	cout<<y;
		return 0;
}