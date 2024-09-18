#include <iostream>
using namespace std;
int x,s;

int main() {
	int a[22];
	for (int i=0;i<12;i++ ) {
		cin>>a[i];
	}	
	for (int i=0;i<12;i++ ) {
		x+=300;
		if (x<a[i]) {
			cout<<-i-1;
			return 0;
		}
		int y=(x-a[i])/100*100;
		s+=y;
		x-=(y+a[i]);
	}
	s+=s*20/100+x;
	cout<<s;
	return 0;
}