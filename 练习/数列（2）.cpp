#include <iostream>
using namespace std;
int main() {
	long long q,w=0,e=1;
	cin>>q;
	for (int i=1; i<=q; i=i+2) {
		e++;
		if (e%2==0){
			w+=i;
		}
		else{
			w-=i;
		}

		
			}
	cout<<w;
	return 0;
}