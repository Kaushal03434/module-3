//compound interest to calculate annual amount

#include<stdio.h>
#include<math.h>
int main()
{
		
		int p;
		float r,t,amount,compound_interest;
		
		printf("Enter amount:");
		scanf("%d",&p);
		
		printf("enter the rate of interest:");
		scanf("%f",&r);
		
		printf("enter the time:");
		scanf("%f",&t);
		
		amount = p*pow((1+r/100),t);
		
		compound_interest = amount-p;
		
		printf("the compound interest is: %f",compound_interest);
		
	return 0;
}
