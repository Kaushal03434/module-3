//WAP calculate person primum based on salary

#include<stdio.h>
int main(){
	
	int salary,primium,total;
	
	printf("Enter your amount of salary:");
	scanf("%d",& salary);
	
	printf("Enter your primium:");
	scanf("%d",& primium);
	
	total = salary/primium;
	
	printf("primium of salary is: %d",total);
	
	return 0;

}
