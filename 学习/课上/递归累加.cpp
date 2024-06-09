#include <iostream>
int a(int b){if (b==1)return 1;return a(b-1)+b;}
int main() {
	int b;
	std::cin>>b;
	std::cout<<a(b);
}