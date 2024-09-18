#include<iostream>
#include<iomanip>
#include <math.h> 
#define  zikun999 	double a,b,c;cin>>a>>b>>c;double l=0,r=1000; double m;while (l<r-0.0001) {	m=(l+r)/2;	double ans=a;	for (int i=0;i<c;i++){		ans= ans-b+ans*(m/100);	}	if (ans>0.0001)r=m;	else l=m;}cout<<fixed<<setprecision(1)<<round(l * 10) / 10<<endl;	return 0;	
using namespace std;
int main() {
	zikun999
}