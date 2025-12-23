#include<stdio.h>

int main(){
	
	//example 1
//	int marks[5] = {10,15,20,25,30};
//	
//	int i;
//	printf("Array Elements");
//	for(i=0; i<5; i++){
//		printf("\n %d", marks[i]);
//	}
//	
//	marks[2] = 100;
//	printf("Updated Array Elements");
//	for(i=0; i<5; i++){
//		printf("\n %d", marks[i]);
//	}
//	
//	marks[4] = 150;
//	printf("Updated Array Elements");
//	for(i=0; i<5; i++){
//		printf("\n %d", marks[i]);
//	}


//example 2

//    int marks[5];
//    int i;
//    printf("Enter 5 students marks \n");
//    for(i=0; i<5; i++){
//    	scanf("%d", &marks[i]);
//	}
//	printf("Students Marks : \n");
//	for(i=0; i<5; i++){
//		printf("marks[%d] = %d \n", i, marks[i]);
//	}


//example 3 Sum of Array elements
   
    int arr[5] = {5,15,25,35,45};
    int sum = 0;
    int i;
    int length = sizeof(arr)/sizeof(arr[0]);
    
    for(i=0; i<length; i++){
    	sum += arr[i];
	}
	printf("Sum is : %d", sum);

    
	
	return 0;
}
