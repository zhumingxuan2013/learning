#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int d[3];
	for (int i=0; i<3; i++) {
		cin>>d[i];
	}
	sort(d, d+3);
	if (d[0]+d[1]<=d[2]) {
		printf("Not triangle\n");
		return 0;
	}
	if(d[0]*d[0]+d[1]*d[1]==d[2]*d[2])	printf("Right triangle\n");
	else if(d[0]*d[0]+d[1]*d[1]>d[2]*d[2])	printf("Acute triangle\n");
	else if(d[0]*d[0]+d[1]*d[1]<d[2]*d[2])	printf("Obtuse triangle\n");
	if(d[0]==d[1]||d[1]==d[2]||d[0]==d[2])	printf("Isosceles triangle\n");
	if(d[0]==d[1]&&d[1]==d[2])	printf("Equilateral triangle\n");
	return 0;
}