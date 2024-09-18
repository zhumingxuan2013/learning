#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	double c[a][2];
	double d[a],sum=0;
	for(int i=0;i<a;i++){cin>>c[i][0]>>c[i][1];d[i]=c[i][1]/c[i][0];}
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1;j++) {
			if(d[j]<d[j+1]){
				swap(d[j],d[j+1]);
				swap(c[j][0],c[j+1][0]);
				swap(c[j][1],c[j+1][1]);
			}
		}
	}
	for(int i=0;i<a;i++){
		if (b-c[i][0]>0.000001) {
			sum+=c[i][1];
			b-=c[i][0];
		}
		else {
			sum+=b*d[i];

			break;
		}

	}
	printf("%.2lf",sum);
	return 0;
}