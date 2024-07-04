//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
//82746
#include<stdio.h>
int main(){
	int n,reverse,rem;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	while(n != 0){
		rem = n%10;
		reverse = reverse*10+rem;
		n = n/10;	
	}
	printf("reverse: %d",reverse);
	
}
