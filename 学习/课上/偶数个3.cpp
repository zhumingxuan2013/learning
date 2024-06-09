#include <iostream>
using namespace std;
int s[1001][2],n;
int main() {
	cin>>n;
	s[0][0]=9;
	s[0][1]=1;
	for (int i=1; i<n-1; i++) {
		s[i][0]=(s[i-1][0]*9+s[i-1][1])%12345;
		s[i][1]=(s[i-1][0]+s[i-1][1]*9)%12345;
	}
	s[n-1][0]=(s[n-2][0]*8+s[n-2][1])%12345;
	cout<<s[n-1][0];
	return 0;
}