#include<iostream>
#include<math.h>
double h,s1,v,l,kun,n;
int main(){
    std::cin>>h>>s1>>v>>l>>kun>>n;
    std::cout<<std::min(int(s1-(sqrt((h-kun)/5))*v+l),int(n))-std::max(int(s1-(sqrt(h/5))*v),0);
}