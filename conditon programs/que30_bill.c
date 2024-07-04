//. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the
//minimum bill should be of Rs. 256/

#include<stdio.h>
int main(){
	int bill,surcharge;
	
	printf("Enter your price number:");
	scanf("%d",&bill);
	
	
	if(bill >= 800)
	{
		surcharge = bill*0.18;
		printf("Your Bill was include surcharge   your rupees.%d",surcharge);
	}else if(bill <= 256){
		printf("Warning: minimum bill was rupees 256 rupees\n your bill was rupees.%d",bill);
	}
}
	
