#include <iostream>
int main() {
	std::string a="DCBAD",b;
	std::cin>>b;
	int sum=0;
	for (int i=0; i<5; i++) if (a[i]==b[i]) sum+=30;
	std::cout<<sum;
	return 0;
}