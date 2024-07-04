//WAP area of Rectangle Formula : A=wl
#include<stdio.h>
int main(){
	
	float w,l,formula;
	
	printf("Enter the width of Rectangle:");
	scanf("%f",&w);
	
	printf("Enter the length of Rectangle:");
	scanf("%f",&l);
	
	formula = w*l;
	
	printf("Area of Rectangle is: %f",formula);
	
	return 0;
}
