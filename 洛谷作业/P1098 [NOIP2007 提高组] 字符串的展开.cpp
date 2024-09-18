#include <iostream>
using namespace std;
bool e(char a,char b,int i,int p){
	if (i+1==p) {
		return false;
	}
	if (a<b) {
		if (a>='0'&&a<='9'&&b>='0'&&b<='9') {
			return true;
		}
		if (a>='a'&&a<='z'&&b>='a'&&b<='z') {
			return true;
		}
	}
	return false;

}
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	string d;
	cin>>d;
	for (int i=0; i<d.size(); i++) {
		if (d[i]=='-'&&e(d[i-1],d[i+1],i,d.size())) {
			if(a==1){
				if (c==1) {
					for (int j=d[i-1]+1; j<d[i+1]; j++) {
						
						char x=j;
						for (int k=0; k<b; k++) {
							cout<<x;
						}
					}
				}
				else {
					for (int j=d[i+1]-1; j>d[i-1]; j--) {
						
						char x=j;
						for (int k=0; k<b; k++) {
							cout<<x;
						}
					}
				}
			}
			else if (a==2) {
				if (c==1) {
					for (int j=d[i-1]+1; j<d[i+1]; j++) {
						
						char x=j;
						for (int k=0; k<b; k++) {
							if (x>='a'&&x<='z') {
								x=x-'a'+'A';
								
							}
							cout<<x;
						}
					}
				}
				else {
					for (int j=d[i+1]-1; j>d[i-1]; j--) {
						
						char x=j;
						for (int k=0; k<b; k++) {
							if (x>='a'&&x<='z') {
								x=x-'a'+'A';

							}
								cout<<x;

						}
					}
				}
			}
			else if (a==3) {
				for (int j=d[i+1]-1; j>d[i-1]; j--) {
					
					for (int k=0; k<b; k++) {
						cout<<'*';
					}
				}
			}
		}else {
			cout<<d[i];
		}
	}
	
	return 0;
}
//abcsttuuvvw1234556677889s-4zz
//abcsttuuvvw1234556677889s-4zz