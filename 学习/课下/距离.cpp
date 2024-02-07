#include <iostream>
#include <cmath>
using namespace std;
void n(){
	int a[6];
	for (int i=0; i<6; i++) {
		cin>>a[i];
	}
	cout<<sqrt((a[0]-a[3])*(a[0]-a[3])+(a[1]-a[4])*(a[1]-a[4])+(a[2]-a[5])*(a[2]-a[5]));
}
int main() {
	n();
}