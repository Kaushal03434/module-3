//WAP to convert days into months
#include<stdio.h>
int main(){
	int days,month;
	printf("Enter Days:");
	scanf("%d",&days);
	
	month = days/30;
	days = days % 365 % 30;
	
	printf("months is: %d,%d days",month,days);
}
