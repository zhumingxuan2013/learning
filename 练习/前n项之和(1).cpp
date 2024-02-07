#include <iostream>
using namespace std;
int main(){
	int a, q = 0;
	cin >> a;
	for (int i = a; i > 0; i--){
		q += i;
	}
	cout << q;
	return 0;
}

