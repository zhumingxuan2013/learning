#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int a){
	if (a == 0 ||a == 1) {
		return false;
	}
	for(int i = 2; i <= sqrt(a); i ++){
		if(a % i == 0) return false;
	}
	
	return true;
}

int daoShu(int a){
	a=a/1000+a/100%10*10+a/10%10*100+a%10*1000;
	while (a%10==0) {
		a=a/10;
	}
	return a;
}

bool finalJudge(int x[4][4]){
	int s[10];
	for (int i=0; i<4; i++) {
		s[i]=x[i][0]*1000+x[i][1]*100+x[i][2]*10+x[i][3];
	}
	for (int i=0; i<4; i++) {
		s[i+4]=x[0][i]*1000+x[1][i]*100+x[2][i]*10+x[3][i];
	}
	s[8]=x[0][0]*1000+x[1][1]*100+x[2][2]*10+x[3][3];
	s[9]=x[0][3]*1000+x[1][2]*100+x[2][1]*10+x[3][0];
	
	for (int i=0;i<10;i++) {
		if (!(isPrime(s[i]) && isPrime(daoShu(s[i])))) {
			return false;
		}
	}
	return true;
}

void printMatrix(int x[4][4]){
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			cout<<x[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

int main() {
	int a[204],ans=0,b[22],sum=0;
	for(int i = 1001; i <= 9999; i +=2){
		if (i/1000%2==0||i/1000==5) {
			i+=1000;
		}
		if(isPrime(i) && isPrime(daoShu(i))){
			a[ans]=i;
			ans++;
			if ((i/1000%2==1 && i/1000!=5) &&
				(i/100%10%2==1 && i/100%10!=5) &&
				(i/10%10%2==1 && i/10%10!=5) &&
				(i%10%2==1 && i%10!=5)) {
				b[sum]=i;
				sum++;
			}
		}
	}
	int x[4][4];
	for (int i=0; i<sum; i++) {
		x[0][0]=b[i]/1000;
		x[0][1]=b[i]/100%10;
		x[0][2]=b[i]/10%10;
		x[0][3]=b[i]%10;
		for (int j=0; j<ans; j++) {
			x[1][0]=a[j]/1000;
			x[1][1]=a[j]/100%10;
			x[1][2]=a[j]/10%10;
			x[1][3]=a[j]%10;
			for (int k=0; k<ans; k++) {
				x[2][0]=a[k]/1000;
				x[2][1]=a[k]/100%10;
				x[2][2]=a[k]/10%10;
				x[2][3]=a[k]%10;
				for (int l=0; l<sum; l++) {
					x[3][0]=b[l]/1000;
					x[3][1]=b[l]/100%10;
					x[3][2]=b[l]/10%10;
					x[3][3]=b[l]%10;
					if (finalJudge(x)) {
						printMatrix(x);
					}
			    }
	        }
	    }
	}
	return 0;
}