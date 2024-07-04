//WAP to Check Number Is Positive or Negative
#include<stdio.h>
int main(){
	int number;
	
	printf("Enter a number:(positive or negative):");
	scanf("%d",&number);
	
	if(number > 0){
		printf("%d number was positive",number);
	}
	else{
		printf("%d number was negative",number);
	}
	
	return 0;
}
