#include <iostream>
using namespace std;
string a,b;
void dfs(string x,string y){
	if (!x.size())return;
	cout<<y[y.size()-1];
	int w=x.find(y[y.size()-1]);
	dfs(x.substr(0,w),y.substr(0,w));
	dfs(x.substr(w+1),y.substr(w,y.size()-w-1));

}
int main() {
	cin>>a>>b;
	dfs(a,b);
	return 0;
}