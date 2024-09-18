#include <iostream>

using namespace std;
double b[102][102];

int main() {
	int a,c;
	cin>>a>>c;
	b[1][1]=c;

	for (int i=1; i<=100; i++) {
		for (int j=1; j<=i+1; j++) {
			
			if (b[i][j]>1) {
				b[i+1][j]+=(b[i][j]-1)/2;
				b[i+1][j+1]+=(b[i][j]-1)/2;
				b[i][j]=1;
			}
			
		}
	}
	while (a) {
		a--;
		int x,y;
		cin>>x>>y;
		printf("%.3lf\n",b[x][y]);
	}
}