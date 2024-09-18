#include <iostream>
#include <algorithm>
int main() {
	int a,b[1000001];
	std::cin>>a;
	for (int i=0;i<a;i++)std::cin>>b[i];
	std::sort(b, b+a);
	for(int i=0;i<a;i++)std::cout<<b[i]<<" ";
}