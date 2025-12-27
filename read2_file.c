#include<stdio.h>

int main(){
	
	FILE *fp;
	char name[50];
	int age;
	float marks;
	
	fp = fopen("C:\\2612\\samiksha_write102.txt", "a");
	if(fp == NULL){
		printf("Error Opening file... \n");
		return 1;
	}
	
	fscanf(fp, "Name : %s \n Age : %d\n Marks : %f \n", name,&age,&marks);
	printf("Student Information Read from File");
	
	printf("Name = %s \n", name);
	printf("Age = %d \n", age);
	printf("Marks = %.2f \n", marks);
	fclose(fp);
		
	
	return 0;
}
