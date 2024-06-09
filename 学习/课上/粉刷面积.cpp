#include <iostream>
int n,sum=0,a[21][4],ans[101][101];
int main() {
	std::cin>>n;
	for (int i=0;i<n;i++) for (int j=0; j<4; j++) std::cin>>a[i][j];
	for (int k=0;k<n;k++) for (int i=a[k][0]; i<a[k][2]; i++) for (int j=a[k][1]; j<a[k][3]; j++) ans[i][j]=1;
	for (int i=0;i<101;i++) for (int j=0; j<101; j++) sum+=ans[i][j];
	std::cout<<sum;
}