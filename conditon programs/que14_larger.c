//WAP to find the largest of three numbers
#include<stdio.h>
int main(){
	int num1,num2,num3,larger;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2:");
	scanf("%d",&num2);
	
	printf("Enter num3:");
	scanf("%d",&num3);
	
	larger = num1;
	
	if(num2 > larger && num2 > num3){
		printf("%d is larger",num2);
	}
	else if(num1 > num2 && num1 > num3){
		printf("%d is larger",num1);
	}
	else if(num3 > larger && num3 > num2){
		printf("%d is larger",num3);
	}

	return 0;
}
