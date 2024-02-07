#include <iostream>
using namespace std;
int main (){
	string a;
	cin>>a;
	for (int i=0; i<a.size(); i++) {
		a[i]=toupper(a[i]);
	}
	int y=0;
	int l=1;
	string q=a.substr(1,1);
	int o=a.size();
	for (int i=0; i<o; i++) {
		
		if ((q!=a.substr(1,1))){
			cout<<"("<<q<<","<<y+l<<")";
			q=a.substr(1,1);
			y=0;
			l=0;
		}
		y++;	
		a.erase(0, 1);
		
	}

	
	return 0;
}