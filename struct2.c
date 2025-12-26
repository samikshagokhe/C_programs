#include<stdio.h>

struct employee{
		int id_no;
		char name[20];
		char designation[20];
		int salary;
};


int main(){
	
	struct employee emp;
	
	printf("Enter Employee Id");
	scanf("%d", &emp.id_no);
	
	printf("Enter name");
	scanf("%s", &emp.name);
	
	printf("Enter Resignation");
	scanf("%s", &emp.designation);
	
	printf("Enter Salary");
	scanf("%d", &emp.salary);
	
	printf("Details of Employee \n");
	printf("Employee ID=%d \n",emp.id_no);
	printf("Employee Name=%s \n",emp.name);
	printf("Employee Designation=%s \n",emp.designation);
	printf("Employee Salary=%d \n",emp.salary);
	
	
	return 0;
}
