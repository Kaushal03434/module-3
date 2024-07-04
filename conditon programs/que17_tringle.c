//WAP to Write a C program to check whether a triangle can be formed with the given
//values for the angles.
#include<stdio.h>
int main(){
	float angle1,angle2,angle3,total;
	
	printf("Enter the angle1 of triangle:");
	scanf("%f",&angle1);
	
	printf("Enter the angle2 of triangle:");
	scanf("%f",&angle2);
	
	printf("Enter the angle3 of triangle:");
	scanf("%f",&angle3);
	
	total = angle1+angle2+angle3;
	
	if(total == 180){
		printf("Your tringle angle was right");
	}
	else{
		printf("Your triangle angle was incorrect!!");
	}
}
