//WAP to accept the height of a person in centimeters and categorize the
//person according to their height.
#include<stdio.h>
int main(){
	float height;
	
	printf("Enter Your Height: ");
	scanf("%f",&height);
	
	if(height > 182.88  ){
		printf("Your height is taller");
	}else if(height < 182.88 && height >= 121.92 ){
		printf("Your height is avrage");
	}else if (height < 121.9) {
		printf("Your height is lower");
	}else {
		printf("invalid hight");
	}
	return 0;
}

