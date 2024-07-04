// WAP Area of Cube formula : a = 6a2
#include<stdio.h>
int main(){
	
	float a;
	float formula;
	
	printf("Enter the area of cube:");
	scanf("%f",&a);
	
	formula = 6*a*a;
	
	printf("Area of cube is: %f",formula);
	return 0;
}
