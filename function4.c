#include<stdio.h>

//With Parameter With Return

//int square(int num){
//	return num*num;
//}
//
//int main (){
//	int result = square(9);
//	printf("Square = %d \n",result);
//	
//	return 0;
//}


int max(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main (){
	
	int result = max (145,213);
	printf("Maximum Number = %d \n", result);
	
	return 0;
}
