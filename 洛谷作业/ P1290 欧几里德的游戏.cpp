#include <iostream>
#include <math.h>
int main() {
	int a,b,n;
	std::cin>>n;
	while (n--) {
		std::cin>>a>>b;
		if (a==b)std::cout<<"Stan wins\n";
		else{if (b<a){if ((a*1.00)/b<=1.61803 )std::cout<<"Ollie wins\n";else  std::cout<<"Stan wins\n";}else {if ((b*1.00)/a>1.61803) std::cout<<"Stan wins\n";else std::cout<<"Ollie wins\n";}}
	}
}