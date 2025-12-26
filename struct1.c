//Structure is a user defined datatype that Allows you to store multiple variables of different datatypes under one name;
//---Syntax---
//struct structure_name{
//	data_type member1;
//	data_type member2;
//	data_type member3;
//}

#include<stdio.h>
struct Student{
	int roll;
	float marks;
	char grade;
};

int main(){
	struct Student s1;
	struct Student s2;
	struct Student s3;
	
	s1.roll = 101;
	s1.marks = 58.67;
	s1.grade = 'B';
	
	s2.roll = 102;
	s2.marks = 69.77;
	s2.grade = 'A';
	
	s3.roll = 103;
	s3.marks = 96.77;
	s3.grade = 'C';
	
	printf("---Students s1 Details---\n");
	printf("Roll No = %d \n", s1.roll) ;
	printf("Marks = %.2f \n", s1.marks);
	printf("Grade = %c \n", s1.grade);
	
	printf("---Students s2 Details---\n");	
	printf("Roll No = %d \n", s2.roll);
	printf("Marks = %.2f \n", s2.marks);
	printf("Grade = %c \n", s2.grade);
	
	printf("---Students s3 Details---\n");
	printf("Roll No = %d \n", s3.roll);
	printf("Marks = %.2f \n", s3.marks);
	printf("Grade = %c \n", s3.grade);
	
	
	return 0;
}
