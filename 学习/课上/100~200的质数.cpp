#include <iostream>
#include <cmath>
using namespace std;
bool b(int a){
	for (int i=2; i<sqrt(a); i++) {
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main() {
	for (int i=100; i<200; i++) {
		if (b(i)) {
			cout<<i<<"\t";
		}
	}
}