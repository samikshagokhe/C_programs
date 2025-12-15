#include<stdio.h>

int main(){
	
//	int amount;
//	printf("Enter Your Food Order Amount:");
//	scanf("%d", &amount);
//	
//	if(amount>500){
//		printf("Congratulations!!! You Get Free Delivery On Your Order");
//	}
//	else{
//		printf("Delivery charges will Apply");
//	}
	
	
	int balance;
	int withdrawl;
	
	printf("Enter Your Balance :");
	scanf("%d", &balance);
	printf("Enter withdrawl amount \n");
	scanf("%d", &withdrawl);
	
	if(withdrawl<=balance){
		printf("withdrawl Successfull!!");
		printf("Remaining balace: %d",balance-withdrawl);
	}
	else{
		printf("Insufficient balance");
	}
	
	return 0;
}
