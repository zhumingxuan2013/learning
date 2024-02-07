#include <iostream>

using namespace std;
int main() {
	int a,c,v;
	cin>>a>>c;
	int b[a];
	v=a-c;

				
	for (int i = 0; i < a; i ++){
		cin>>b[i];
	}
	for (int i = 0; i < c; i ++){
		cout<<b[v]<<" ";
		v++;
		if (v>a) {
			
			break;
		}
	}
	for (int i = 0; i <=c; i ++){
		cout<<b[i]<<" ";
		if (i>v+1) {
			break;
		}
	}
	
	
	

	return 0;
}