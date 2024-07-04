#include<stdio.h>

int main()
{
	int a,b;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	
	printf("enter the value of b:");
	scanf("%d",&b);
	
	printf("total = sum : %d\n mul is : %d\n division is : %d\n" 
	"substraction is : %d\n module is : %d\n",a+b,a*b,a/b,a-b,a%b);
	
	return 0;
}
