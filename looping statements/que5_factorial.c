//WAP to print factorial of given number
#include<stdio.h>
int main(){
	int i,num,factorial=1;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(num<=i){
			printf("%d ",i);
		}
		else{
			printf("%d x ",i);
		}
		
		factorial = factorial*i;
	}
	printf("= %d",factorial);
		
		return 0;
}
