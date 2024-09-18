#include <iostream>
using namespace std;
int main() {
	string a;int ans=0;cin>>a;for (int i=0; i<a.size(); i++)ans+=((a[i]=='8')?2:(a[i]=='2'||a[i]=='0'||a[i]=='9'||a[i]=='6')?1:0);cout<<ans;
	return 0;
}