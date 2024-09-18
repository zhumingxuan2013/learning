#include <iostream>
int a[100],b[100],p[100],k,max_b,n,k2;
int main() {
	std::cin>>n;
	for (int i=1; i<=n; i++) std::cin>>a[i],b[i]=1,p[i]=0;
	for (int i=n; i>=1; i--,max_b=0){
		for (int j=i+1; j<=n; j++)if(a[i]<a[j]&&max_b<b[j])k=j,max_b=b[j];
		if(k)b[i]=max_b+1,p[i]=k;
	}
	for (int i=1; i<=n; i++) if(b[i]>b[k2])b[k2]=b[i],k2=i;
	std::cout<<"max="<<b[k2]<<"\n";
	while (k2>0) std::cout<<a[k2]<<" ",k2=p[k2];
}