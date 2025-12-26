#include<stdio.h>


//struct students{
//	int roll_no;
//	char name[20];
//	float marks;
//};
//
//int main(){
//	
//	int n;
//	printf("Enter Number of students");
//	scanf("%d",n);
//	int i;
//	struct students students[n];
//	for(i=0; i<n; i++){
//		printf("Enter Details of Students = %d", i+1);
//		printf("Roll No:");
//		scanf("%d",&students[i].roll_no);
//		printf("Name:");
//		scanf("%s",&students[i].name);
//		printf("Marks:");
//		scanf("%f",&students[i].marks);
//	}
//	printf(" \n ---Enter Students Record---");
//	for(i=0; i<n; i++){
//		printf("Roll no = %d, Name = %s, Marks = %.2f \n" students[i].roll_no, students[i].name, students[i].marks);
//	}	
//}



struct employee{
	int id;
	char name[20];
	char Domain[20];
};

int main(){
	
	int n;
	print("Enter no. of Emplloyees");
	scanf("%d",n);
	int i;
	struct employee emp[n];
	for(i=0; i<n; i++){
		printf("Enter Details of employees = %d", i+1);
		printf("ID:");
		scanf("%d" &emp[i].id);	
     	printf("Name:");
		scanf("%s" &emp[i].name);
		printf("Domain:");
		scanf("%s" &emp[i].Domain);
}

	printf(" \n ---Enter employee Record---");
	for(i=0; i<n; i++){
		printf("ID = %d, Name = %s, Domain = %s \n" emp[i].id,emp[i].name, emp[i].Domain);
	}
	return 0;
}
