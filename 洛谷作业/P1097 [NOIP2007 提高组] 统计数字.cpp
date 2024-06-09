#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	int a,b[200000],cnt=0;
	cin>>a;
	for (int i=0; i<a; i++)cin>>b[i];
	b[a]=b[a-1]+1;
	sort(b,b+a);
	for (int i=1; i<a+1; i++) {
		cnt++;
		if (b[i]!=b[i-1]) {
			cout<<b[i-1]<<" "<<cnt<<endl;
			cnt=0;
		}
	}
	
	return 0;
}