#include<stdio.h>

//Binary Write

int main(){
	
	FILE *fp;
	int numbers[] = {10,20,30,40,50};
	
	fp = fopen("C:\\2612\\numbers1.bin", "wb");
	
	if(fp == NULL){
		printf("Error Opening file... \n");
		return 1;
	}
	fwrite(numbers,sizeof(int),5,fp);
	fclose(fp);
	printf("Binary Data Written Suceessfully");
	
	
	return 0;
}
