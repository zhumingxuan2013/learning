#include <iostream>
int main() {
	int a,b;
	std::string s;
	std::cin>>a>>b>>s;
	for (int i=0; i<s.size(); i++) {
		if (s[i]=='u'&&b!=0) b--;
		if(s[i]=='d'&&b<a) b++;
	}
	std::cout<<b;
}