//Write a program to find out the max number from given array using function

#include<stdio.h>

void func();

int main(){
	func();
}

void func(){
	int range;
	int max;
	int i;
	
	
	printf("Enter range of array: ");
	scanf("%d",&range);
	
	int arr[range];
	printf("Enter %d numbers:\n",range);
	
	for(i=0;i<range;i++){
		scanf("%d",&arr[i]);
	}	
	
	max = arr[0];
	
	for(i=1;i < range;i++){
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	
	printf("The maximum number in the aray is : %d\n", max);
	
}
	
	
	


