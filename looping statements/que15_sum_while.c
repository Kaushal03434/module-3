//.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main(){
	int i,sum=0,num;
	
	while(i<10){
		
		printf("Enter number:");
		scanf("%d",&num);
		sum = num+sum;
		i++;
	}
	printf("sum is: %d",sum);
	
	
}
