//WAP to convert kilometers into meters
#include<stdio.h>
int main(){
	

	float kilometers,meters;
	
	printf("Enter kilometers:");
	scanf("%f",&kilometers);
	
	meters = kilometers*1000;
	
	printf("%0.0f kilometers to meters is %0.0f",kilometers,meters);
	
	return 0;
}
