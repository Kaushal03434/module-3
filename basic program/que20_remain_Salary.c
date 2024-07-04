//WAP find out of remaining salary.
#include<stdio.h>
int main(){
	int month_salary,remain_salary;
	
	printf("Enter Monthly Salary:");
	scanf("%d",&month_salary);
	
	float insurance = month_salary*10/100;
	float loan = month_salary*10/100;
	remain_salary = month_salary-insurance-loan;
	
	printf("remaining salary was: %d",remain_salary);
	return 0;
}
