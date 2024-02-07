#include <iostream>

using namespace std;
int main() {
	int i;
	cin>>i;
	int a;
	int y=0;
	for (int o=0; o<i; o++) {
		cin>>a;
		if (a>=85) {
			y++;
		}
	}
	cout<<y;

	return 0;
	
}