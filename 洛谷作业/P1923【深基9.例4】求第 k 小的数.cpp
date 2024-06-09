#include <iostream>
#include<algorithm>

using namespace std;
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int c[a];
	for(int i=0;i<a;i++){
		scanf("%d",&c[i]);
	}
	nth_element(c,c+b,c+a);
	printf("%d",c[b]);
	return 0;
}