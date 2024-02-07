#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a,b,c,d;
	cin >> a >> b;
	if(a <= 1000){
		c = 8;
	}
	else {
		d = ceil(a - 1000)/500+1;
		
		c = d * 4 + 8;
	}
	if(b == 0){
		cout << c + 5;
	}else{
		cout << c;
	}
	
	return 0;
}