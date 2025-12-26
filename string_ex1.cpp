#include<stdio.h>
#include<string.h>

int main(){
	
	//char fullName[20];
	
//	printf("Enter Your Name :");
//	scanf("%s", name);
//	
//	printf("Your Name is = %s", name);

//    printf("Enter Your Full Name :");
//    fgets(fullName, sizeof(fullName),stdin);
//    printf("Your fullName is = %s",fullName);


//strlen
//     char name[] = "Samiksha Gokhe";
//     printf("Length = %d", strlen(name));
     
//strcpy
//     char a[20] = "Hello";  
//	 char b[20];
//	 strcpy(b,a);   
//	 printf("Copied String = %s",b);
	 
//strcat
//     char x[10]	= "Samiksha";
//     char y[10] = "Gokhe";
//     strcat(x,y);
//     printf("%s",x);
     
//     char i[10] = "Welcome";
//     char j[10] = "to";
//     char k[10] = "Nagpur";
//     strcat(i,j);
//     printf("%s",i);
//     printf("%s",k);

//strcmp for compairing
//strcasecmp for case sensitive
//char s1[10] = "hello";
//char s2[10] = "Hello";
//if(strcasecmp(s1,s2)==0){
//	printf("Strings are Equal");
//}
//else{
//	printf("Strings are not Equal");
//}

//char str[] = "Hello its Samiksha";
//strupr(str);
//printf("%s", str);

//char str[] = "Hello Its SAMIKSHA";
//strlwr(str);
//printf("%s", str);

//char str1[] = "Programming";
//strrev(str1);
//printf("%s", str1);

//char name[] = "Samiksha";
//int len = strlen(name);
//printf("First letter is : %c \n",name[0]);
//printf("Last letter is : %c \n",name[len-1]);

//char str[] = "Samiksha";
//int i = 0;
//while(str[i] != '\0')
//i++;
//printf("Length = %d", i);


//char str[] = "Welcome to Pune Samiskha";
//int i;
//int count = 1;
//for(i=0; str[i] != '\0'; i++){
//	if(str[i] == ' '){
//		count ++;
//	}
//	print("%d",count);
//}

//char str[] = "Banana";
//int i;
//for(i=0; str[i]!='\0'; i++){
//	if(str[i]=='a'){
//		str[i] = '@';
//	}
//}
//printf("%s",str);


char str[20], rev[20];
printf("Enter String :");
scanf("%s",str);

strcpy(rev,str);
strrev(rev);

if(strcmp(str,rev)==0)
printf("Palindrom string");
else
printf("Not Palindrom string");



	 
	 
	return 0;
}
