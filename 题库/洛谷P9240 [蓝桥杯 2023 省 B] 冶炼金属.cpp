#include <iostream>
int n,min1,max1=1e9,x,y;
int main() {
	std::cin>>n;
	while (n--)std::cin>>x>>y,min1=std::max(min1, x/(y+1)+1),max1=std::min(max1, x/y);
	std::cout<<min1<<" "<<max1;
}