#include <iostream>
#include <math.h>

using namespace std;

int n=16;
int ans[4][4];
int book[17];
bool isPrime(int a){
	if (a == 0 ||a == 1) {
		return false;
	}
	for(int i = 2; i <= sqrt(a); i ++){
		if(a % i == 0) return false;
	}
	
	return true;
}
void dfs(int step){
	
	//memset(ans, 0, sizeof(ans));
	if (step==n+1) {
		for (int i=0;i<4;i++) {
			for (int j=0;j<4;j++) {
				cout<<ans[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
		
		return ;
	}
	for (int i=1; i<=n; i++) {
		if(!book[i]){
			ans[(step-1)/4][(step-1)%4]=i;
			if ((step-1)/4) {
				if (!isPrime(ans[(step-1)/4][(step-1)%4]+ans[(step-1)/4-1][(step-1)%4])) {
					continue;
				}
				
			}
			if ((step-1)%4) {
				if (!isPrime(ans[(step-1)/4][(step-1)%4]+ans[(step-1)/4][(step-1)%4-1])) {
					continue;
				}
				
			}
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
}
int main() {
	dfs(1);
	return 0;
}