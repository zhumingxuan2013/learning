#include <iostream>

using namespace std;
void a(){
	int b;
	cin>>b;
	int c[b],d=-32768,e=32767;
	for (int i=0; i<b; i++) {
		cin>>c[i];
		if (c[i]>d) {
			d=i;
		}
		if (c[i]<e) {
			e=i;
		}
		cout<<"最大值："<<c[d]<<"\t"<<d;
		cout<<"最小值："<<c[e]<<"\t"<<e;

	}
	
}
int main() {
	a();
}