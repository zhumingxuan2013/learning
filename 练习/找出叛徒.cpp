#include <iostream>
#include <string.h>
using namespace std;
int main() {
	long long a,cnt=0;
	cin>>a;
	string b="",c=to_string(a);
	for (long long i=a-c.size()*9-1; i<a; i++) {
		string p=to_string(i);
		int sum=0;
		for (long long j=0; j<p.size(); j++) {
			sum+=p[j]-'0';
		}
		if (a==sum+i) {
			b=b+' '+p;
			cnt++;
		}
	}
	cout<<cnt;
	for (long long i=0; i<b.size(); i++) {
		if (b[i]==' ') {
			cout<<"\n";
		}else {
			cout<<b[i];
		}
	}
	return 0;
}