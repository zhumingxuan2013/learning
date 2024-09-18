#include <iostream>
int main() {
	int n,a,b,c=0,m=0;
	std::cin>>n;
	while (n--)std::cin>>a,c=(a>b)?c+1:1,m=std::max(m,c),b=a;
	std::cout<<m;
}