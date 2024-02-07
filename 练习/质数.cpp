#include <iostream>
using namespace std;
int main() {
	long long a, b = 2, c = 0;
	cin >> a;
	while (b < a - 1) {
		b ++;
		if (a % b==0) {
			c = 1;
		}
	}
	if(c == 1)
	{
		cout << "no";
		
	}else{
		cout << "yes";
	}
			
	return 0;
}