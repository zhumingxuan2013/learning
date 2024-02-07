#include <iostream>
using namespace std;
int main() {
	long long a,b;
	cin>>a;
	b=a*2-1;
	for (int i=0; i<b; i++) {
		for (int j = 0; j < b; j++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}