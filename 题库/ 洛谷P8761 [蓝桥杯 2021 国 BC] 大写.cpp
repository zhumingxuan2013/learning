#include <iostream>
using namespace std;
int main() {
	char a;while(cin>>a)cout<<char((a>='A'&&a<='Z')?a:a-('a'-'A'));
	return 0;
}