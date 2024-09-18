#include <iostream>
using namespace std;
int main() {
	int n,ans=0;
	cin>>n;
	for (int i=1; i<=n; i++)ans+=i*(to_string(i).find('0')<to_string(i).size()||to_string(i).find('2')<to_string(i).size()||to_string(i).find('1')<to_string(i).size()||to_string(i).find('9')<to_string(i).size());
	cout<<ans;
	return 0;
}