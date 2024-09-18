#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	string o;
	cin>>o;
	for (int i=0; i<a; i++) {
		int b;
		
		cin>>b;
		if(b==1){
			string r;
			cin>>r;
			o=o+r;
			cout<<o<<endl;
		}
		if (b==2) {
			int p,l;
			cin>>p>>l;
			o=o.substr(p,l);
			cout<<o<<endl;
		}		
		if(b==3){
			int p;
			string l;
			cin>>p>>l;
			o=o.insert(p, l);
			cout<<o<<endl;
		}
		if(b==4){
			string l;
			cin>>l;
				if (o.find(l, 0)<1000) {
					cout<<o.find(l, 0)<<endl;

				}else  {
				    cout<<-1<<endl;
				}
			
		}
	}
	
	return 0;
}