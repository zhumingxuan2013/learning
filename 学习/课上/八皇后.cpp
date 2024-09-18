#include<iostream>
using namespace std;
int a[10],sum=0;
int b[20],c[20],d[20];
void print(){
	cout<<++sum<<endl;
	for(int i=1;i<=8;i++)
		cout<<'<'<<i<<'<'<<a[i]<<'<'<<' ';
	cout<<endl;
}
void search(int t){
	for(int i=1;i<=8;i++){
		if(!b[i]&&!c[t-i+7]&&!d[t+i]){
			a[t]=i;
			b[i]=1;
			c[t-i+7]=1;
			d[t+i]=1;
			if(t==8) print();
			else search(t+1);
			b[i]=0;
			c[t-i+7]=0;
			d[t+i]=0;
		}
    }
}
int main(){
	search(1);
	return 0;
}