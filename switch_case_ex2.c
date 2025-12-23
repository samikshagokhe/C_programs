#include<stdio.h>

int main(){
	
	int a,b, choice;
	char cont;
	
	do{
		printf("---Calculator Menu---");
		printf("1.Addition (+) \n");
		printf("2.Substract (-) \n");
		printf("3.Multiplication (*) \n");
		printf("4.Division (/) \n");
		printf("0.Exit \n");
		
		printf("Enter Your Choice :");
		scanf("%d", &choice);
		
		if(choice != 0 && choice<=4){
			printf("Enter First Number :");
			scanf("%d",&a);
			printf("Enter Second Number :");
			scanf("%d",&b);
		}
		
		switch(choice){
			case 1 : printf("Sum = %d", a+b);
			break;
			case 2 : printf("Sub = %d", a-b);
			break;
			case 3 : printf("Multiplication = %d", a*b);
			break;
			case 4 : printf("Division = %d", a/b);
			break;
			case 0 : printf("Calculator Exiting...Bye Bye");
			break;
			default: printf("Invalid Choice!!!");
		}
		if(choice != 0){
			printf("Do you want to perform another operation??(Y/N)");
			scanf(" %c",&cont);
		}
		else{
			cont = 'n';
		}
	}
	while(cont == 'y'|| cont == 'Y');
	
	return 0;
}
