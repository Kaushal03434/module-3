//WAP to Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
	float Fahrenhit,celcius;
	
	printf("Enter Fahrenhit value:");
	scanf("%f",&Fahrenhit);
	
	celcius = (Fahrenhit-32)*5/9;
	
	printf("Fahrenhit to celcius convert: %0.2f celsius",celcius);
	return 0;
}
