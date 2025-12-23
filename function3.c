#include<stdio.h>
#define PI 3.146
//Function without Parameter but with Return Value

int getNumber(){
	return 10;
}
float areaOfCircle(){
	float radius = 7;
	return PI*radius*radius;
}

int main(){
	
	int x = getNumber();
	printf("Number = %d",x);
	
	printf("Area of Circle = %.2f \n", areaOfCircle());
	
	return 0;
}
