#include <iostream>
using namespace std;
int main() {
	int a,cnt=0;
	char b;
	cin>>a>>b;
	for (int i=1; i<=a; i++) {
		string o=to_string(i);
		for (int j=0; j<o.size();j++ ) {
			if (o[j]==b) {
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}