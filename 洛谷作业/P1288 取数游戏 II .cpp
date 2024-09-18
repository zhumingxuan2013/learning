#include<iostream>
int n,cnt=0,a;
int main(){
	std::cin>>n;
	for(int i=0;i<n;i++){std::cin>>a;if(a)cnt++;}
	if(cnt%2)std::cout<<"YES";
	else std::cout<<"NO";
}