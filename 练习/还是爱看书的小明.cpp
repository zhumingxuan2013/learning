#include <iostream>
using namespace std;
int main() {
	int a,b,j=0,cnt=0;
	cin>>a>>b;
	int c[a];
	for (int i=0; i<a; i++) {
		cin>>c[i];

		if (j==0) {
			cout<<"Day"<<cnt+1<<":";
		}
		if (c[i]+j>=b||i==a-1) {
			cout<<i+1<<".\n";
			j=0;
			cnt++;
			
		}
		else {
			j+=c[i];
			cout<<i+1<<",";
		}
		
	}

	return 0;
}