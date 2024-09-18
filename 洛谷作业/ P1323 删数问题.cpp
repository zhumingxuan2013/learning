#include<iostream>
#include<queue>
using namespace std;
int k,m;
priority_queue<int,vector<int>,greater<int> > cre;
string s;
int main(){
cin>>k>>m;
cre.push(1);
for(int i=1;i<=k;++i){
	int x=cre.top();
	s+=to_string(x);
	cre.pop();
	cre.push(2*x+1);
	cre.push(4*x+5);
}
	cout<<s<<endl;
	int cnt=0;
	for(;;){
		for(int i=0;i<s.size()-1;++i){
			if(s[i]<s[i+1]){
				++cnt;s.erase(i,1);
				if(cnt>=m){cout<<s<<endl;exit(0);}
				break;
			}
		}
	}
	return 0;
}