#include <iostream>
bool a(int c){
	for (int j=2; j<c; j++) {
		if (c%j==0) {
			return false;
		}
	}
	return true;
}
int main() {
	int b;
	std::cin>>b;
	for (int i=b/2;i<b;i++) {
		if (a(i)&&a(b-i)) {
			std::cout<<i*(b-i);
			break;
		}
	}
}