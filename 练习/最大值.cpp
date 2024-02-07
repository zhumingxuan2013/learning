#include <iostream>
using namespace std;
int main(){
	int a,q,w=-10000;
	cin>>a;
	for (int i=0; i<a; i++) {
	cin>>q;
		if (q>w) {
			w=q;
			
		}
	}
	cout<<w<<endl;
	return 0;
}
