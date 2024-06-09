#include <iostream>
using namespace std;
int main() {
	int a,n,x=0,y=0;
	cin>>a;
	for (int i=0;i<a;i++) {
		cin>>n;
		if(n>=60){
			x++;
			if (n>=85) {
				y++;
			}
		}
	}
	cout<<(int((x+0.005)*100))/a<<"% "<<(int((y+0.005)*100))/a<<"%";
}