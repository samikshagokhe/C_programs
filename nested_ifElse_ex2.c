#include<stdio.h>

int main(){
	
	int restaurantOpen, foodAvailable, payment;
	
	printf("Is Restaurant Open (1-yes, 0-no)");
	scanf("%d", &restaurantOpen);
	
	if(restaurantOpen == 1){
		printf("Id Food Available (1-yes, 0-no)");
		scanf("%d", &foodAvailable);
		
		if(foodAvailable ==1){
			printf("Payment succesful? (1-yes, 0-no)");
			scanf("%d",payment);
			
			if(payment==1){
				printf("Order confirmed");
			}
			else{
				printf("Payment failed");
			}
		}
		else{
			printf("Food is not Avaailable");
		}
	}
	else{
		printf("Restaurant is closed");
	}
	
	return 0;
}
