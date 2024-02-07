#include <iostream>

using namespace std;
int main() {
	int a;
	cin>>a;
	
	
	for (int j=0; j<a; j++) {
		int c[4];
		string b;
		
		cin>>b;
		for (int i=0; i<4; i++) {
			c[i]=1;
		}
		for (int i=0; i<b.size(); i++) {
			int x=b[i];
			if (b[i]>'1'){
				c[0]=0;
			}
			if (b[i]>'7'){
				c[1]=0;
			}
			if (b[i]>'9'){
				c[2]=0;
			}
			if (b[i]>'F'){
				c[3]=0;
			}
		}
		for (int i=0; i<4; i++) {
			cout<<c[i]<<" ";
			
		}
		cout<<endl;
	}
	
}