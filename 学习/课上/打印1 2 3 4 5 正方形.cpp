#include <iostream>

using namespace std;
int main(){
	int a[7][7]{};
	for (int i=0; i<7; i++) {
		for (int j=0; j<7; j++) {
			
			if (i>j&&i+j<6) {
				a[i][j]=3;
			}
			else if (i>j&&i+j>6) {
				a[i][j]=5;
			}
			else if (i<j&&i+j>6) {
				a[i][j]=4;
			}
			else if (i<j&&i+j<6) {
				a[i][j]=2;
			}
			
			a[i][i]=1;
			a[i][6-i]=1;
		}
	}
	for (int i=0; i<7; i++) {
		for (int j=0; j<7; j++) {
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}