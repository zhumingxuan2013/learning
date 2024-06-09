#include <iostream>
int l=1,r,n,b[101],x;
void a(){
	int mid=(l+r)/2;
	if(l>r){std::cout<<"No";return;}
	if(x>b[mid])r=mid;
	if(x<b[mid])l=mid;
	if(x==b[mid]){std::cout<<"Yes";return;}
	a();
}
int main() {
	std::cin>>n>>x;
	r=n;
	for (int i=1; i<=n; i++)std::cin>>b[i];
	a();
}