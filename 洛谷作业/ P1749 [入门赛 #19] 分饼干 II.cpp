#include <iostream>
int main() {
	long long Recycler_NOIer,n,k;
	std::cin>>Recycler_NOIer;
	while (Recycler_NOIer--) {
		std::cin>>n>>k;
		if (k*(k+1)/2>n) std::cout<<"No\n";
		else std::cout<<"Yes\n";
	}
}