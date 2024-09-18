#include <iostream>
using namespace std;
int a[21],b[21];
bool prime_num(int i){
	if (i==1) {
		return false;
	}
	for (int j=2; j<i; j++) {
		if (i%j==0) {
			
			return false;
		}
	}
	return true;
}
void dfs(int step){
	if (step==21&&prime_num(a[1]+a[20])) {
		for (int i=1; i<=20; i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	
		for (int i=1; i<=20; i++) {
			if (0==b[i]&&prime_num(i+a[step-1])) {
				b[i]=1;
				a[step]=i;
				dfs(step+1);
				b[i]=0;
				a[step]=0;
			}
		}
	
	
}
int main() {
	dfs(1);
	return 0;
}