#include <iostream>

using namespace std;
int o[5];
bool a[5][5],book[5];
void dfs(int step){
	if (step==5) {
		for (int i=0; i<5; i++) {
			cout<<i+1<<":"<<char(65+o[i])<<" ";
		}
		cout<<endl;
		return ;
	}
	
	for(int i=0;i<5;i++){
		if (0==book[i]&&a[step][i]==1) {
			o[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
	
}
int main() {
	a[0][0]=0;a[0][1]=0;a[0][2]=1;a[0][3]=1;a[0][4]=0;
	a[1][0]=1;a[1][1]=1;a[1][2]=0;a[1][3]=0;a[1][4]=1;
	a[2][0]=0;a[2][1]=1;a[2][2]=1;a[2][3]=0;a[2][4]=0;
	a[3][0]=0;a[3][1]=0;a[3][2]=0;a[3][3]=1;a[3][4]=0;
	a[4][0]=0;a[4][1]=1;a[4][2]=0;a[4][3]=0;a[4][4]=1;
	dfs(0);
}