//calculate electrocity bill unit to condition of charges...
#include<stdio.h>
int main(){
	int custom_id;
	char name[100];
	float unit;
	
	printf("Enter your customer id: ");
	scanf("%d",& custom_id);
	
	printf("Enter your Name: ");
	scanf(" %s",& name);
	
	printf("Enter your electiccity Bill unit: ");
	scanf("%f",& unit);
	
	if(unit < 350){
		printf("customer id: %d Name: %s unit: %f charge: @1.20",custom_id,name,unit);
	}
	else if(unit >= 350 && unit <= 600){
		printf("customer id: %d Name: %s unit: %f charge: @1.50",custom_id,name,unit);
	}
	else if(unit >= 600 && unit <= 800){
		printf("customer id: %d Name: %s unit: %f charge: @1.80",custom_id,name,unit);
	}
	else if(unit >= 800){
		printf("customer id: %d Name: %s unit: %f charge: @2.00",custom_id,name,unit);
	}
	
	
}
