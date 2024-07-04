//WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
int main(){
	int value,num;
	
	for (value=0;value<5;value++){
		printf("\nEnter number:");
		scanf("%d",&num);
		printf("%d",num);
	}
	
}
