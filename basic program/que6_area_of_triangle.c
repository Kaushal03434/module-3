//WAP area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>

int main(){
	
	float base,height;
	float formula;
	
	printf("Enter the base of triangle:");
	scanf("%f",&base);
	
	printf("Enter the height of triangle:");
	scanf("%f",&height);
	
	formula =0.5*base*height;
	
	printf("The area of triangle is: %f",formula);
	return 0;
}
