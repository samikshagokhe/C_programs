#include<stdio.h>

//Function without Parameter and without Return

void msg(){
	printf("\nHello Samiksha!! Welcome to C Programming.\n");
}
void printStar(){
	printf("\n**********\n");
}
void todaysMenu(){
	printf("1.Pizza");
	printf("2.Burger");
	printf("3.Sandwich");
}
void tomorrowsMenu(){
	printf("1.Modak");
	printf("2.Fish");
	printf("3.Dosa");
}

int main(){
	
    todaysMenu();
    printStar();
    tomorrowsMenu();
	
		
	return 0;
}
