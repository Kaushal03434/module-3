//WAP to read any Month Number in integer and display the number of days for this month
#include<stdio.h>
int main(){
	int month_num;
	
	printf("Enter month number:");
	scanf("%d",&month_num);
	
	switch(month_num){
	
	case 1:
		printf("January \n31 days");
		break;
	case 2:
		printf("February \n29 days(leap year)");
		break;
	case 3:
		printf("march \n 31days");
		break;
	case 4:
		printf("april \n30 days");
		break;
	case 5:
		printf("may \n31 days");
		break;
	case 6:
		printf("june \n31 days");
		break;
	case 7:
		printf("july \n30 days");
		break;
	case 8:
		printf("august \n31 days");
		break;
	case 9:
		printf("september \n30 days");
		break;
	case 10:
		printf("october \n31 days");
		break;
	case 11:
		printf("November \n30 days");
		break;	
	case 12:
		printf("December \n31 days");
		break;
	default:
		printf("Please Enter valid months...");							
	}
}
