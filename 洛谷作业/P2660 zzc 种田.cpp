#include <iostream>
int main() {
	int a,b,sum=0;
	std::cin>>a>>b;
	while (a&&b) {if(a>b){sum+=4*(a/b)*b;a-=b*(a/b);}else {sum+=4*(b/a)*a;b-=(b/a)*a;}}
	std::cout<<sum;
}