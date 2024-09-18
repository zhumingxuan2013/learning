#include <iostream>
#include <map>
using namespace std;
map<string,bool>b;
int main() {
	int n,m,cnt=0;
	cin>>n>>m;
	while (n--) {
		string a;
		cin>>a;
		string tmp;
		while(getchar()==' '){
			cin >> tmp;
			a += tmp;
		}
		b[a]=1;
	}
	while (m--) {
		string a;
		cin>>a;
		string tmp;
		while(getchar()==' '){
			cin >> tmp;
			a += tmp;
		}		
		cnt+=(b[a]==1);
	}
	cout<<cnt;
	return 0;
}