#include <iostream>
int main() {
	int i,j,a[100][100];
	std::cin>>i>>j;
	for (int n=0; n<i; n++) for (int m=0; m<j; m++) std::cin>>a[n][m];
	for (int n=0; n<j; n++) {
		for (int m=i-1; m>=0; m--) std::cout<<a[m][n]<<" ";
		std::cout<<"\n";
	}
}