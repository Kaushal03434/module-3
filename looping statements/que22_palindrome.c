//Accept 3 numbers from user using while loop and check each numbers
//palindrome
#include<stdio.h>
int main(){
	
	int n,palindrome,rem,op;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	op = n;
	
	while(n != 0){
		rem = n%10;
		palindrome = palindrome*10+rem;
		n = n/10;
	}

		if(op == palindrome){
			printf(" \n %d number was palindrome",palindrome);
		}
		else{
			printf("%d number was not palindrome",palindrome);
		}	
	
	

}
