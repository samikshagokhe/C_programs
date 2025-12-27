//Reading from file

#include<stdio.h>

int main(){
	
	FILE *fp;
	
	char str[200];
	fp = fopen("C:\\2612\\samiksha_write101.txt", "r");
	
	if(fp == NULL){
		printf("Error Opening file... \n");
		return 1;
	}
	printf("File Content");
	while(fgets(str,sizeof(str),fp) != NULL){
		printf("%s",str);
	}
	fclose(fp);
	
	return 0;
}
