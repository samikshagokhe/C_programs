#include<stdio.h>

struct employeeS{
	int id_no; //4 byte
	char name[10]; //10 byte
	char designation[10]; //10 byte
	int salary; //4 byte
};

union employeeU{
	int id_no; 
	char name[10]; 
	char designation[10]; 
	int salary; 
};

int main(){
	
	struct employeeS e1;
	printf("Size of struct =%d \n", sizeof(e1));
	union employeeU e2;
	printf("Size of union = %d", sizeof(e2));
	
	return 0;
	
}
