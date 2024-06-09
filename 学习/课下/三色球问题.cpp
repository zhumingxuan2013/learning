#include <iostream>

using namespace std;
int main() {
	int x=0;
	for (int i=2; i<=6; i++) {
		for (int j=0;j+i<=8&&j<=3;j++) {
			x++;
		}
	}
	cout<<x;
}