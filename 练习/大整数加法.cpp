#include <iostream>
using namespace std;
int main() {
	string a;
	cin>>a;
	int b=a.size();
	int c[b];
	string o;
	cin>>o;
	for (int i=0; i<b; i++) {
		char g = a.substr(i,1)[0];
		int n=g;
		c[i]=g-48;
	}
	int p[b];
	for (int i=0; i<b; i++) {
		char g = o.substr(i,1)[0];
		int n=g;
		p[i]=g-48;
	}
	int ans[b];
	
	for (int i=0; i<b; i++) {
		ans[i]=0;
	}
	int jw=0;
	for (int i=0; i<b; i++) {
		
		if (p[i]+c[i]+jw>=10) {
			ans[i]=jw+p[i]+c[i]-10;
			int y=jw;
			jw=(p[i]+c[i]+y)/10;
			ans[i+1]=jw;
			
		}
		else {
			jw=0;
			ans[i]+=p[i]+c[i];
		}
		
	}
	if (jw!=0) {
		cout<<jw;
	}
	for (int i=b-1; i>=0; i--) {
		
		cout<<ans[i];
	}
	return 0;
}