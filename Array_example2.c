#include<stdio.h>

int main(){
	
//	int arr[8] = {1,2,3,4,5,6,7,8};
//	int even = 0, odd = 0;
//	int i;
//	
//	for(i=0; i<8; i++){
//		if(arr[i]%2==0){
//			even++;
//		}
//		else{
//			odd++;
//		}
//	}
//	printf("Even Count =%d, Odd Count =%d", even, odd);
	
	
	
//	int arr[5] = {34,12,67,21,12};
//	int max = arr[0];
//	int i;
//	for(i=1; i<5; i++){
//		if(arr[i]>max){
//			max = arr[i];
//		}
//	}
//	printf("Maximum Number = %d", max);
	
	
	int arr[5] = {34,12,67,21,12};
	int min = arr[0];
	int i;
	for(i=1; i<5; i++){
		if(arr[i]>min){
			min = arr[i];
		}
	}
	printf("Minimum Number = %d", min);
	
	
	return 0;
	
}
