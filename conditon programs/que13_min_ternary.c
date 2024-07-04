//WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
	int num1,num2,num3,min;
	
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	printf("Enter num3: ");
	scanf("%d",&num3);
	
	min = (num1 < num2)?((num1 < num3)? num1 : num3):((num2 < num3)? num2:num3);
	
	printf("Minimum number among %d,%d and %d is: %d\n",num1,num2,num3,min);
	return 0;
}
