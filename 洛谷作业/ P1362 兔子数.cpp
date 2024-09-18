#include <iostream>
using namespace std;
long long 梨,苹果;
long long S(long long x){
	long long ans=0;
	while (x>0) ans+=x%10,x/=10;
	return ans;
}
long long dfs(long long s){
	long long 黄瓜=0;
	for (int i=0; i<4; i++) {
		long long 西红柿炒蛋=s*10+i;
		if (西红柿炒蛋==0||S(西红柿炒蛋*西红柿炒蛋)!=S(西红柿炒蛋)*S(西红柿炒蛋)){
			continue;
		}
		if(梨<=西红柿炒蛋&&西红柿炒蛋<=苹果)
			黄瓜++;
		if (西红柿炒蛋<=苹果/10)
		黄瓜+=dfs(西红柿炒蛋);
	}
	return 黄瓜;
}
int main() {
	cin>>梨>>苹果;
	cout<<dfs(0);
	return 0;
}