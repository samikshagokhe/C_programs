#include<stdio.h>

int main(){
	
	int i,j;
	
	//Print number 1 to 10
	for(i=1; i<=10; i++){
		printf("%d \n", i);
	}
	
	//Multiplication of 5
	for(i=1; i<=10; i++){
		printf(" 5 x %d = %d \n", i, i*5);
	}	
		
    for(i=10; i>=1; i--){
		printf("%d \n", i);
	}
	
	for(i=0; i<=20; i+=2){
		printf("%d \n",i);
	}
	
	for(i=1,j=1; i<=5; i++,j--){
		printf("i=%d, j=%d \n", i,j);
	}
	
	int sum;
	for(i=1; i<=5; i++){
		sum+= i;
	}
	printf("sum=%d",sum);
	
	return 0;
}
