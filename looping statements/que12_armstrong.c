// Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
#include<math.h>
int main(){
	
	int n,rem,arm,digit,ori;
	
	printf("Enter digit:");
	scanf("%d",&digit);
	
	printf("Enter n:");
	scanf("%d",&n);
	
	ori=n;
	
	while(n != 0){
		rem = n%10;
		arm = arm+pow(rem,digit);
		n = n/10;
		
			
	}
	if(ori == arm){
		printf("The number was armstrong");
	}else{
		printf("The number was not armstrong");
	}
	
	
	return 0;
}
