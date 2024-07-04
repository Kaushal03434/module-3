// WAP to Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total,avg;
	
	printf("Enter kaushal's salary:");
	scanf("%d",&s1);
	
	
	printf("Enter prathm's salary:");
	scanf("%d",&s2);
	
	printf("Enter dhaval's salary:");
	scanf("%d",&s3);
	
	printf("Enter chintan's salary:");
	scanf("%d",&s4);
	
	printf("Enter darshan's salary:");
	scanf("%d",&s5);
	
	total = s1+s2+s3+s4+s5;
	avg = total/5;
	
	printf("The Total is: %d",total);
	printf("The avg is: %d",avg);
	
	
	
}
