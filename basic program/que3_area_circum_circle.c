//WAP to Find Area And Circumference of Circle

#include<stdio.h>

int main(){
	
	float radius;
	float formula;
	
	printf("enter radius of circle:");
	scanf("%f",&radius);
	
	formula = 3.14*radius*radius;
	
	printf("area of circle is: %f",formula);
	
	return 0;
}
