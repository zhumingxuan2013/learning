#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	int b[a],ans=a-1;
	cin>>b[0];
	for (int i=1; i<a; i++) {
		cin>>b[i];
		if(b[i]-b[i-1]==1){
			ans--;
		}else if(b[i]-b[i-1]==-1){
			ans--;
		}
	}
	cout<<ans;
	return 0;
}
