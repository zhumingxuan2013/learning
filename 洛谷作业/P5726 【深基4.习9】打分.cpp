#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a;
	double sum;
	cin>>a;
	int d[a];
	for (int i=0; i<a; i++) {
		cin>>d[i];
	}
	sort(d, d+a);
	for (int i=1; i<a-1; i++) {
		sum+=d[i];
	}
	printf("%.2lf",sum/(a-2));
	return 0;
}