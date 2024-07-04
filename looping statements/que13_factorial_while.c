//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main(){
	int i=1,num,fact=1;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	while(i <= num){
		if(i>= num){
			printf("%d",i);
		}else{
			printf("%d x ",i);
		}
		fact = fact*i;
		i++;
	}
	printf(" = %d",fact);
}
