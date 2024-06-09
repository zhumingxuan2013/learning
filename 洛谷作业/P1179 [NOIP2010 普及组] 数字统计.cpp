#include <iostream>
int main() {
	int a,b,cnt=0;	
	std::cin>>a>>b;
	for (int i=a;i<=b;i++) {int s=i;while (s) {if (s%10==2)cnt++;s/=10;}}
    std::cout<<cnt;
}