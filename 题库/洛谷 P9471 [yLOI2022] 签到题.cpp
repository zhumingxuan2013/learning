#include <iostream>
using namespace std;
string a;int x,y,z;
int main() {
	cin>>a;for(int i=0;i<a.size();i++)(a[i]>='a'&&a[i]<='z')?x++:(a[i]>='A'&&a[i]<='Z')?y++:(a[i]>='0'&&a[i]<='9')?z++:z=z;
	cout<<z<<" "<<x<<" "<<y;
	return 0;
}