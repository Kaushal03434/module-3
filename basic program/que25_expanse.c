//Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
	int i,user,e1,e2,e3,e4,e5;
	
	printf("Enter first expence number:");
	scanf("%d",&e1);
	
	printf("Enter second expence number:");
	scanf("%d",&e2);
	
	printf("Enter three expence number:");
	scanf("%d",&e3);
	
	printf("Enter four expence number:");
	scanf("%d",&e4);
	
	printf("Enter five expence number:");
	scanf("%d",&e5);
	
	int total = e1+e2+e3+e4+e5;
	user = total/5;
	
	printf("The average of expense is: %d",user);
	
}
