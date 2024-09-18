#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int d[3];
	for (int i=0; i<3; i++) {
		cin>>d[i];
	}
	sort(d, d+3);
	char a,b,c;
	cin>>a>>b>>c;
	cout<<d[a-'A']<<" ";
	cout<<d[b-'A']<<" ";
	cout<<d[c-'A']<<" ";
	
	return 0;
}