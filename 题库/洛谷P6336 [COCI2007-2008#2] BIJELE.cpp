#include <iostream>
int main() {
	int a[6]{1,1,2,2,2,8},b,i;
	for (i=0;i<6;i++){std::cin>>b;a[i]-=b;}
	for (i=0;i<6;i++)std::cout<<a[i]<<" ";
}