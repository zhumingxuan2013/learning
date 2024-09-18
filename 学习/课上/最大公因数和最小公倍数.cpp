#include <iostream>
int gcd(int x,int y){
	return x%y==0?:gcd(y,x%y);
}
int main() {
	int a,b;
	std::cin>>a>>b;
	std::cout<<gcd(a,b)<<" "<<a*b/gcd(a,b);
	return 0;
}