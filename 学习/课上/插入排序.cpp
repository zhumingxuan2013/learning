#include <iostream>
int main() {
	int a,b,c[100000];
	std::cin>>a;
	memset(c,1e9*1e9*1e9*1e9*1e9*1e9*1e9, sizeof(c));
	for (int o=0; o<a; o++) {std::cin>>b;int j=o-1;while(c[j]>b&&j>=0){c[j+1]=c[j];j--;}c[j+1]=b;}
	for (int i=0; i<a; i++)std::cout<<c[i]<<" ";
}