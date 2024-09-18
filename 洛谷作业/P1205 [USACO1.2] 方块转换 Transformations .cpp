#include <iostream>
using namespace std;
int n;
char b[12][12],c[12][12],d[12][12],a[12][12];


bool h1(){
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
				b[j][n-i+1]=a[i][j];
		}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(b[i][j]!=c[i][j])
		return 0;
	return 1;

}
bool h2(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[n-i+1][n-j+1]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(b[i][j]!=c[i][j])
		return 0;
	return 1;

}
bool h3(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[n-j+1][i]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(b[i][j]!=c[i][j])
		return 0;
	return 1;
}
bool h4(){
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			b[i][n-j+1]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(b[i][j]!=c[i][j])
		return 0;
	return 1;

}
bool h5(){
	h4();	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		a[i][j]=b[i][j];  
	if (h1()) {
		
		return 1;
	}		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			a[i][j]=b[i][j];  
		if (h2()) {
	
		return 1;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			a[i][j]=b[i][j];  
		if (h3()) {
	
		return 1;
	}

	return 0;
}
bool h6(){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(b[i][j]!=c[i][j])
		return 0;
	return 1;

}
void h(){
	if (h1()) {
		cout<<1;
		return ;

	}if (h2()) {
		cout<<2;
		return ;

	} if (h3()) {
		cout<<3;
		return ;

	} if (h4()) {
		cout<<4;
		return ;

	}if (h5()) {
		cout<<5;
		return ;

	}if (h6()) {
		cout<<6;
		return ;

	}
		cout<<7;
	return ;

}
int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		for (int j=1 ;j<=n;j++) {
			cin>>a[i][j];
			d[i][j]=a[i][j];
		}
	}	
	for (int i=1; i<=n; i++) {
		for (int j=1 ;j<=n;j++) {
			cin>>c[i][j];
		}
	}

	h();
	return 0;
}