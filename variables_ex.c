#include<stdio.h>

int main (){
	
	//Integer types
	int i = 10;
	short int si = 5;
	long int li = 12564;
	unsigned int ui = 20;
	
	//Character types
	char c = 'A';
	
	//Floating-point types
	float f = 3.14;
	double d = 3.1432654;
	long double ld = 3.1456125468521;
	
	
	printf("---Integer Types---\n");
	printf("int : value = %d, size = %zu byte \n" ,i,sizeof(i));
	printf("short int : value = %d, size = %zu byte \n", si, sizeof(si));  
	printf("long int : value = %ld, size = %zu byte \n", li, sizeof (li));
	printf("unsigned int : value = %u, size = %zu byte \n", ui,sizeof(ui));
	
	printf("---Character Types---\n");
	printf("char : value = %c, size = %zu byte \n", c, sizeof(c));
	
	printf("---Floating Point Types---\n");
	printf("float : value = %f, size = %zu byte \n",f, sizeof(f));
	printf("double : value = %lf, size = %zu byte \n",d, sizeof(d));
	printf("long double : value = %Lf, size = %zu byte \n",ld, sizeof(ld));
	
	
	return 0;
}
