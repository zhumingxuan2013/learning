#include <iostream>

using namespace std;
bool zs(int c){
	if (c==1||c==0)
		return false;
	for (int d=2; d<c; d++) {
		if (c%d==0)
			return false;
	}
	return true;
}
void a(int d){
	
	int f=0;
	for (int e=0;e<d; e++) {
		if (zs(e))
			f++;
	}
	int g[f];
	int h=0;
	for (int e=0;e<d; e++) {
		if (zs(e)) {
			g[h]=e;
			h++;
		}
	}
	int ans=0;
	for (int i=0; i<d/3; i++) {
		for (int j=0; j<i; j++) {
			
			if (g[i]+g[j]==d) {
			    cout<<d<<"="<<g[i]<<"+"<<g[j]<<"\n";
				ans=1;
				break;
					
				}
			
			if(ans==1){
				break;
			}
		}			
		if(ans==1){
			break;
		}
		
	}
	
}
void x(){
	for (int i=4; i<=2000; i+=2) {
		a(i);
	}
	
}
	

int main(){
	x();
}