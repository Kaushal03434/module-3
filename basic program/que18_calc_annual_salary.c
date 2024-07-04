//WAP Calculate person’s Annual salary
#include<stdio.h>
int main(){
	
	int month_salary,annu_salary;
	
	printf("Enter your monthly salary:");
	scanf("%d",&month_salary);
	
	annu_salary = month_salary*12;
	
	printf("Your annual salary is: %d",annu_salary);
	return 0;
}
