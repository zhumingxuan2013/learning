#include <iostream>
using namespace std;

bool isHuiWen(long long n){
	long long a=0, b=0,c;
	c = n;
	while (n != 0) {
		a=a+n%10;
		n=n/10;
		a=a*10;
	}
	b = a/10;
	if (b == c) {
		return true;
	}
	return false;
}

int main() {
	long long n = 5005,b,c;
	for(int i = 1; i < 10; i++)
	{
		b = (n + i*110);
		c = b*95;
		
		if(isHuiWen(c))
		{
			cout << "xyyx = " << b << "  abccba = "<< c;
		}
	}
	return 0;
}


