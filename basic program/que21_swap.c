// accept 2 number from user to swap the value
#include<stdio.h>
int main(){
	
	printf("\n-----with third variable -----\n");
	//with third variable
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	printf("-----before swap -----\n a:%d b:%d",a,b);
	
	c=a; //c take a's value
	a=b;
	b=c;
	
	printf("\n-----after swap -----\n a:%d b:%d\n\n",a,b);
	
	printf("\n-----without third variable -----\n");
	//without third variable
	
	int a1,b1;
	
	printf("Enter a1:");
	scanf("%d",&a1);
	
	printf("Enter a2:");
	scanf("%d",&b1);
	
	printf("-----before swap -----\n a1:%d b1:%d\n",a1,b1);
	a1=a1+b1;
	b1=a1-b1;
	a1=a1-b1;
	
	printf("-----after swap -----\n a1:%d b1:%d",a1,b1);
	
	return 0;
}
