#include <iostream>
int main() {
	int a;
	std::cin>>a;
	std::string b[a];
	int c[a];
	for (int i=0;i<a;i++) 
		std::cin>>b[i]>>c[i];
	for (int i=0; i<a-1; i++) {
		for (int j=0; j<a-1; j++) {
			if (c[j]<c[j+1]) {
				std::swap(c[j], c[j+1]);
				std::swap(b[j], b[j+1]);
			}
		}
	}
	for (int i=0;i<a;i++) 
		std::cout<<b[i]<<" "<<c[i]<<std::endl;
}