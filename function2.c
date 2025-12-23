#include<stdio.h>

//Function with Parameter but No Return.

//int i;
//void printTable(int num){
//	for(i=1; i<=10; i++){
//		printf("%d x %d = %d \n", num, i, num*i);
//	}
//}
//
//int main(){
//	
//	int number;
//	printf("Enter Number");
//	scanf("%d",&number);
//	
//	printf("\n Multiplication table of %d :\n");
//	printTable(number);
//	
//	return 0;
//}



void areaOfReactangle(int length, int width){
	printf("Area = %d", length*width);
}

int main(){
	
	int l, w;
	printf("Enter length");
	scanf("%d",&l);
	printf("Enter width");
	scanf("%d",&w);
	
	printf("\n Area of rectangle :\n");
	areaOfReactangle(l,w);
	
	return 0;
}


