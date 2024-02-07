#include <iostream>
using namespace std;
int main() {
	long long a;
	for(int i = 0; i < 10; i ++){
		for(int j = 0; j < 10; j ++){
			a = i*100000 + 20080 + j;
			if(a % 9 == 0 && a % 11 ==0)
			{
				cout << a;
			}
		}
	}
	return 0;
}