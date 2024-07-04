// Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
	int i,n,sum=0;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	while(i<=n){
		sum += i;
		i++;
	}
	printf("The natural number is: %d",sum);
	
	return 0;
}
