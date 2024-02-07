#include <iostream>

using namespace std;
int main() {
	int a=4;
	int b;
	cin>>b;
	int c[a-1];
	for (int i=0; i<a-1; i++) {
		cin>>c[i];
	}
	int y=0,u=0;
	if (b==1) {
		y+=2;
	}
	else {
		u+=2;
	}
	for (int i=0; i<a-1; i++) {
		if (c[i]==1) {
			y++;
		}
		else {
			u++;
		}
	}
	if (y>u) {
		cout<<"m";
	}
	else {
		cout<<"k";
	}
	return 0;
}