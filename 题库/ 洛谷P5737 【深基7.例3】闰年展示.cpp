#include <iostream>
using namespace std;
int main() {
	int c, b;
	cin>>c >>b;
	int d[10000],cnt=0;
	
	for(int a = c; a <= b; a ++){
		if(a%4==0){
			if(a%400==0) d[++cnt]=a;
			else if (a%100==0) a=a;
			else d[++cnt]=a;
		}
	}cout<<cnt<<"\n";
	for (int i=1; i<=cnt; i++) {
		cout<<d[i]<<" ";
	}
	return 0;
}