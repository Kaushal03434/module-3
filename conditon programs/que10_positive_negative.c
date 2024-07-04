//WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
	int number;
	
	printf("Enter number:");
	scanf("%d",&number);
	
	if(number > 0){
		printf("%d was positive",number);
	}
	else if(number == 0){
		printf("%d this number was",number);
	}
	else if(number < 0){
		printf("%d this number was negative",number);
	}
	else{
		printf("Please Enter Valid number...",number);
	}
}
