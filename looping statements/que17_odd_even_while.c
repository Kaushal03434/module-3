//Calculate 5 numbers from user and calculate number of even and odd using
//of while loop
#include<stdio.h>
int main(){
	int i,num,evensum=0,oddsum=0,odd=0,even=0;
	
	while(i<5){
		printf("Enter Number:");
		scanf("%d",&num);
		if(num % 2 == 0){
			even++;
		}
		else{
			odd++;
		}
		
		i++;
	}
	printf("%d Number is even\n",even);
	printf("%d Number is odd\n",odd);
	
}

