#include<stdio.h>

int main(){
	
//	int i,j;
//	
//	for (i=5; i>=1; i--){
//		
//		for(j=1; j<=i; j++){
//				printf("*");
//		}
//		printf("\n");
//	}
	
	//square pattern
//	int i,j;
//	for(i=1; i<=5; i++){
//		for(j=1; j<=5; j++){
//			printf("*");
//		}
//		printf("\n");
//	}

    //right angled triangle
//    int i,j;
//    for(i=1; i<=5; i++){
//    	for(j=1; j<=i; j++){
//    		printf("*");
//		}
//		printf("\n");
//	}

    //Pyramid
//    int i,j,k;
//    for(i=1; i<=5; i++){
//    	for(k=1; k<=5-i; k++){
//    		printf(" ");
//		}
//    	for(j=1; j<=2*i-1; j++){
//    		printf("*");
//		}
//		printf("\n");
//	}

    //Inverted Pyramid
//    int i,j,k;
//    for(i=5; i>=1; i--){
//    	for(k=1; k<=5-i; k++){
//    		printf(" ");
//		}
//    	for(j=1; j<=2*i-1; j++){
//    		printf("*");
//		}
//		printf("\n");
//	}

    //count number of digits
//    int num, count = 0;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if (num == 0) {
//        count = 1;
//    } else {
//        while (num != 0) {
//            count++;
//            num = num / 10;
//        }
//    }
//    
//    printf("Number of digits = %d\n", count);

     //factorial of a number
     int i,fact,n;
     fact=1;
     
	 printf("enter number:");
	 scanf("%d", &n);
     
     for(i=1; i<=n; i++){
     	fact= fact*i;
	 }
	 printf("%d",fact);
      
    
   
   
	return 0;
}


