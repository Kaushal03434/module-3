//WAP to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
	int sell_price,amount;
	
	printf("Enter your sell price:");
	scanf("%d",&sell_price);
	
	printf("Enter your amount:");
	scanf("%d",&amount);
	
	if(amount > sell_price){
		printf("Congratulations!! you got profit...");
	}
	else{
		printf("oops!! You got loss...");
	}
}
