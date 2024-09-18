#include<iostream>
unsigned long long n,k;
int main(){
   	std::cin>>n>>k;
    k=k^(k/2);
    while(~--n)std::cout<<(k>>n&1);
}