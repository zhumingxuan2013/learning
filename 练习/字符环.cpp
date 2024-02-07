#include <iostream>
using namespace std;
int main (){
	string ta,tb;
	cin>>ta>>tb;
	string a,b;
	a=ta+ta;
	b=tb+tb;
	int ans=0;
	for (int len=1; len<a.size(); len++) {
		for (int pos=0;pos<=a.size()-len-1;pos++) {
			string s=a.substr(pos,len);
			if (b.find(s)!=b.npos) {
				ans=max(ans,(int)s.length());
			}
		}
	}
	cout<<ans;
	return 0;
}