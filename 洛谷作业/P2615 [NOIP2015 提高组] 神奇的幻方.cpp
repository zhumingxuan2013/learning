#include <iostream>
using namespace std;
int n,h[40][40],k;
void print(){
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cout<<h[i][j]<<" ";
		}
		cout<<endl;
	}
	return;
}
void dfs(int step,int x,int y){
	if (step==k+1) {
		print();
		return ;
	}
	else{
		if (x==0&&y!=n-1) {
			h[x][y]=step;

			dfs(step+1, n-1, y+1);
		}else if (y==n-1&&x>0) {
			h[x][y]=step;

			dfs(step+1, x-1, 0);
		}else if (y==n-1&&x==0) {
			h[x][y]=step;

			dfs(step+1, x+1, y);
		}else {
			if (h[x-1][y+1]==0) {
				h[x][y]=step;

				dfs(step+1, x-1, y+1);
			}else {
				h[x][y]=step;

				dfs(step+1, x+1, y);
			}
		}

		return;
	}
	return;

}
int main() {
	cin>>n;
	k=n*n;
	dfs(1, 0, n/2);
	return 0;
}