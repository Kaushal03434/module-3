//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	
	printf("---before swap--- %d %d\n",a,b);
	
	a=a*b;// a=20*40 =800
	b=a/b;// b=800/40 = 20
	a=a/b;// a=800/200 = 40
	
	printf("---after swap--- %d %d \n\n",a,b);

	return 0;
	
}
