#include <iostream>
int a[101],b[101],c[101],n,ans;
int main() {
	std::cin>>n;
	for (int i=0; i<n; i++) {
		std::cin>>a[i]>>b[i];
		if (i==0) c[0]=a[0];
		else c[i]=std::min(c[i-1]+b[i-1],a[i]);
		ans+=c[i];
	}
	std::cout<<ans;
}