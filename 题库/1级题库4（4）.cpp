#include <iostream>

using namespace std;
int main() {
	int i=0;
	cin>>i;
	int a;
	int q=0,w=0,e=0;
	for (int p=0; p<i; p++) {
		cin>>a;
		if (a==1) {
			q++;
		}
		if (a==5) {
			w++;
		}
		if (a==10) {
			e++;
		}
	}
	cout<<q<<endl;
	cout<<w<<endl;	
	cout<<e;
		return 0;
	
}