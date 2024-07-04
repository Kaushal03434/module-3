//WAP to Convert years into days and months
#include<stdio.h>
int main(){
	int years,days,months;
	
	printf("enter years:");
	scanf("%d",&years);
	
	days = years*365;
	months = years*12;
	
	printf("\n%d years,%d month,%d days",years,months,days);
	return 0;
}
