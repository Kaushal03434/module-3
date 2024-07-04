//WAP to Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
	int marks;
	
	printf("Enter your marks out odd: ");
	scanf("%d",&marks);
	
	if(marks > 33){
		printf("Congratulations!! You are a passes...");
	}
	else{
		printf("oops!! You are Failed...");
	}
}
