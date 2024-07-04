//WAP to check if the given year is a leap year or not
#include<stdio.h>
int main(){
	int year;
	
	printf("Enter the year:");
	scanf("%d",&year);
	
	if((year % 4 == 0 && year % 100 != 0)||(year % 400 ==0))
	{
		printf("it was a leap year:poptlal birthday");
	}
	else{
		printf("it was not a leap year....");
}
}
