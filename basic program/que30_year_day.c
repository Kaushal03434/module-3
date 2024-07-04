//WAP to convert years into days and days into years
#include<stdio.h>
int main(){
	int years,days;
	
	printf("Enter Years:");
	scanf("%d",&years);
	
	days = years*365;
	
	printf("%d years,%d days",years,days);
	
	//days into years
	printf("\nEnter days:");
	scanf("%d",&days);
	
	years = days/365;
	printf("%d days,%d years",days,years);
	return 0;
}
