#include <iostream>
int main() {
	int a,ans=0,l;
	scanf("%d",&a);
	for (int i=0; i<a; i++) {
		scanf("%d",&l);
		ans^=l;
	}
	printf("%d",ans);
}