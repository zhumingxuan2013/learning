#include <iostream>
int ans,n;
void s(int n){
	ans++;
	for (int i=1;i<=n/2;i++)s(i);
}
int main() {
	std::cin>>n;
	s(n);
	std::cout<<ans;
}