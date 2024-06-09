#include <iostream>
int s(int n,int k){
	if(k==1||k==n) return 1;
	return s(n-1,k-1)+s(n-1,k)*k;
}
int main() {
	int n,k;
	std::cin>>n>>k;
	std::cout<<s(n,k);
}