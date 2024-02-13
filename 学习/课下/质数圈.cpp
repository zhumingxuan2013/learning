#include <iostream>
using namespace std;
int prime_num(int num){
	int i;
	for(i = 2; i <= num / 2; i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int tmp[20] = {0},num[20] = {0},i,j,flag=0;
	num[0] = 1;
	tmp[0] = -1;
	for(i = 1; i < 20;){ 
		for(j = 2; j <= 20; j++){
			if(j > flag && prime_num(num[i - 1] + j) == 1 && tmp[j - 1] == 0){
				num[i] = j;
				tmp[j - 1] = -1;						
				flag = 0;
				break;
			}
		}
		if((j == 21) || (i == 19 && prime_num(num[0] + num[19]) == 0)){
			if(i == 19 && prime_num(num[0] + num[19]) == 0){
				tmp[num[i] - 1] = 0;
			}	
			i--;  
			tmp[num[i] - 1] = 0;
			flag = num[i];			
		}
		else{
			i++;
		}
	}
	for(i = 0; i < 20; i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}