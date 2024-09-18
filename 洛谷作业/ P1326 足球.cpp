#include<iostream>
long long s,t,n,a1,a2;
int main(){
	while(std::cin>>s>>t>>n){
		if(s<n){a1=3*s+n-s-1;if(!t) a1++;}
		else{a1=3*std::max(n-1,std::min(n,s-t));if(n-s+t==1) a1++;}
		s>t?a2=3+std::max(0LL,n-t-1):a2=std::min(3+std::max(0LL,n-t-1),std::max(n-t+s,0LL));
		std::cout<<a1<<" "<<a2<<"\n";	
	}
}