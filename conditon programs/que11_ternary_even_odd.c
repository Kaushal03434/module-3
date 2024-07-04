//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main(){
	int number;
	printf("Enter number:");
	scanf("%d",&number);
	
	(number%2)?printf("%d number is even",number):printf("%d number is odd",number);
}
