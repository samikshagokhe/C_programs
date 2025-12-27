//Writing to File

#include<stdio.h>

int main(){
	
	FILE *fp;
	fp = fopen("C:\\2612\\samiksha_write101.txt", "w");
	if(fp == NULL){
		printf("Error Opening file... \n");
		return 1;
	}
	fprintf(fp,"Hello, Its File Handling \n");
	fprintf(fp,"Hello, Its File Handling 2nd Line");
	fclose(fp);
	printf("Data Written Successfully");
	
	
	return 0;
}
