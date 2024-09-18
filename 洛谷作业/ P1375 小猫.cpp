#include <iostream>
#define ll long long
using namespace std;
const int 咸蛋=1000000007;
ll 苹果,牛奶;
ll 咖喱(ll 土豆,ll 豌豆){
	ll 西瓜=1;
	while (豌豆) {
		if (豌豆%2==1) 西瓜=西瓜*土豆%咸蛋;
		土豆=土豆*土豆%咸蛋,豌豆/=2;
	}
	return 西瓜;
}
ll 香蕉(){
	ll 番茄=1,榴莲=1;
	for (ll 桃子=苹果+1; 桃子<=苹果*2; 桃子++) 番茄=番茄*桃子%咸蛋;
	for (ll 桃子=1; 桃子<=苹果; 桃子++) 榴莲=榴莲*桃子%咸蛋;
	榴莲=咖喱(榴莲,咸蛋-2);
	return 番茄*榴莲%咸蛋;
}
int main() {
	cin>>苹果;
	牛奶=咖喱(苹果+1,咸蛋-2);
	cout<<香蕉()*牛奶%咸蛋;
	return 0;
}