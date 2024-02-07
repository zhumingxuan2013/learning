#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;


string multi(string a1, string b1){
	char s1[a1.size()],s2[b1.size()];
	int a[a1.size()],b[b1.size()],c[a1.size()+b1.size()+1];
	int lena,lenb,lenc,w,jinWei;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	strcpy(s1, a1.c_str());
	strcpy(s2, b1.c_str());
	lena=strlen(s1);
	lenb=strlen(s2);
	for (int i=0;i<lena;i++)
		{
			a[i]=s1[lena-1-i]-'0';
		}
	for (int i=0;i<lenb;i++)
		{
			b[i]=s2[lenb-1-i]-'0';
		}
	jinWei=0;
	for (int i=0;i<lena;i++)
		{
			for (int j=0;j<lenb;j++) 
				{
					w=i+j;
					c[w]=c[w]+a[i]*b[j];
					jinWei=c[w]/10;
					c[w+1]=c[w+1]+jinWei;
					c[w]%=10;
				}
		}
	lenc=lena+lenb;
	while (c[lenc-1]==0&&lenc>0){
		lenc--;
	}
	string ans;
	for (int i=lenc;i>0 ; i--) {
		ans.push_back(c[lenc - i] + '0');
	}
	
	reverse(ans.begin(), ans.end());
	
	return ans;
}

int main() {
	
	int n;
	cin >> n;
	bool z = true;
	if (n==1) {
		string a[n];
		for(int i = 0; i < n; i ++){
			cin >> a[i];
			unsigned long long sum = 0;
			for(int j = 0; j < a[i].size(); j ++){
				sum += a[i][j]-48;
			}
			if(sum == 0) {
				z = false;
				break;
			}else{
				if(sum % 3 == 0){
					while(a[i][a[i].length() - 1] == '0') a[i].pop_back();
					reverse(a[i].begin(), a[i].end());
				}
			}
		}
		cout<<a[0];
	}
	else {
		string a[n];
		for(int i = 0; i < n; i ++){
			cin >> a[i];
			unsigned long long sum = 0;
			for(int j = 0; j < a[i].size(); j ++){
				sum += a[i][j]-48;
			}
			if(sum == 0) {
				z = false;
				break;
			}
			if(sum % 3 == 0){
				while(a[i][a[i].length() - 1] == '0') a[i].pop_back();
				reverse(a[i].begin(), a[i].end());
			}
		}
		if(z){
			string c ;
			c=multi(a[0], a[1]);
			
			for (int i=2; i<n; i++) {
				c=multi(c,a[i]);
			}
			cout<<c;
		}else{
			cout << 0;
		}
		
	}
}