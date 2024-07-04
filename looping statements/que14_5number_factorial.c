//Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
int main(){
	int i,user,fact,j;
	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter factorial number:");
		scanf("%d",&user);
		fact=1;
		for(j=1;j<=user;j++)
		{
		fact = fact*j;	
		}
		printf("%d",fact);
			
	}	
		
	
}
