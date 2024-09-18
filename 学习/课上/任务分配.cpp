#include <iostream>
int a[5][5],ans,book[5],k[5],l[5],t[5],p[5];
void dfs(int step,int sum){if (step==5) {if (ans<=sum) for (int i=0; i<5; i++) {l[i]=k[i];t[i]=p[i];}ans=std::max(ans, sum);}else{for(int i=0;i<5;i++)if (0==book[i]) {k[step]=a[step][i];p[step]=i;book[i]=1;dfs(step+1, sum+a[step][i]);book[i]=0;}}}
int main() {
	a[0][0]=13;a[0][1]=11;a[0][2]=10;a[0][3]=4;a[0][4]=7;a[1][0]=13;a[1][1]=10;a[1][2]=10;a[1][3]=8;a[1][4]=5;a[2][0]=5;a[2][1]=9;a[2][2]=7;a[2][3]=7;a[2][4]=4;a[3][0]=15;a[3][1]=12;a[3][2]=10;a[3][3]=11;a[3][4]=5;a[4][0]=10;a[4][1]=11;a[4][2]=8;a[4][3]=8;a[4][4]=4;
	dfs(0,0);
	for (int i=0; i<5; i++)std::cout<<char(i+65)<<":J"<<t[i]+1<<"  "<<l[i]<<"\n"; 
	std::cout<<ans;
}