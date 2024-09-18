#include <iostream>
int n,f[1001];
int main() {
	std::cin>>n;
	for (int i=1; i<=n; i++) {for (int j=1; j<=i/2; j++) f[i]+=f[j];f[i]=f[i]+1;}
	std::cout<<f[n];
}