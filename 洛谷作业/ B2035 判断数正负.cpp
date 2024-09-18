#include <iostream>
#include <queue>
#include <map>
using namespace std;
map<char,string>a;
queue<char>q;
int main() {
	a['-']="negative";
	a['0']="zero";
	for(int i=1;i<10;i++){
		char an=i+'0';
		a[an]="positive";
	}
	char s;
	int j=0;
	while(cin>>s){
		q.push(s);
	}
	string k;
	while (!q.empty()) {
		k+=q.front();
		q.pop();
	}
	char c=k[0];
	cout<<a[c];
	return 0;
}