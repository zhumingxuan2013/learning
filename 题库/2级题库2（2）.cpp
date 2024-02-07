#include <iostream>
using namespace std;
int main(){
	
	int b = 0;
	string a;
	
	getline(cin,a);
	int c=a.size();
	for (int i=0; i<c; i++) {
		if (i==0) {
			b++;
		}
		else if (a.substr(i,1)==" ") {
			b++;
		}
	}

	string d[b];
	
	int pos = 0;
	for(int i = 0; i < b; i ++){
		int newpos = a.find(" ", pos);
		if (i==0) {
			d[i] = a.substr(pos, newpos);
		}else{
			d[i] = a.substr(pos, newpos-pos);
		}
		pos = newpos + 1;
	}
	int p[b];
	for (int i=0; i<b; i++) {
		p[i]=d[i].size();
	}
	for (int x=0; x<b-1; x++) {
		for (int y=0; y<b-1-x; y++) {
			if(p[y] > p[y+1])
				swap(p[y],p[y+1]);
		}
	}
	for (int i=0; i<b; i++) {
		if (d[i].size()==p[0]) {
			cout<<d[i]<<endl;
		}
	}
	for (int i=0; i<b; i++) {
		if (d[i].size()==p[b-1]) {
			cout<<d[i];
		}
	}
	return 0;
}
