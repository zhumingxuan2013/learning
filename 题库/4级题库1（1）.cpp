#include <iostream>
int main() {
	int a,b;
	std::cin>>a>>b;
	int c[a],d[a];
	for (int e=0; e<a; e++)
		std::cin>>c[e]>>d[e];
	int f=0;
	for (int g=0; g<a; g++) {
		if (c[g]>d[g]) {
			if (c[g+1]<d[g+1]) {
				if (c[g]-d[g]>3) 
					f+=c[g];
				else
					f+=d[g]-b;
			}
			else
				f+=c[g];
		}
		else  {
			if (d[g+1]<c[g+1]) {
				if (d[g]-c[g]>3) 
					f+=d[g];
				else
					f+=c[g]-b;
			}
		}
	}
	std::cout<<f;
}
