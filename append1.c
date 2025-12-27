#include<stdio.h>

int main(){
	
	FILE *fp;
	fp = fopen("C:\\2612\\samiksha_write101.txt", "a");
	
	if(fp == NULL){
		printf("Error Opening file... \n");
		return 1;
	}
	fprintf(fp, "This line is appended at end \n");
	fprintf(fp, "This is samiksha from Nagpur \n");
	fclose(fp);
	printf("Data Appended Successfully");
	
	return 0;
}
