//WAP to Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main(){
	int a,b,sum,size;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	
	sum = a+b;
	
	
	printf("%d+%d = %d",a,b,sum);
	size = sizeof(sum);
	printf("\nThe size of sum is %d",size);
	return 0;
}
