//WAP to read any Month Number and display the name for this month
#include<stdio.h>
int main(){
	int month_num;
	
	printf("Enter month number:");
	scanf("%d",&month_num);
	
	switch(month_num){
	
	case 1:
		printf("January");
		break;
	case 2:
		printf("February");
		break;
	case 3:
		printf("march");
		break;
	case 4:
		printf("april");
		break;
	case 5:
		printf("may");
		break;
	case 6:
		printf("june");
		break;
	case 7:
		printf("july");
		break;
	case 8:
		printf("august");
		break;
	case 9:
		printf("september");
		break;
	case 10:
		printf("october");
		break;
	case 11:
		printf("November");
		break;	
	case 12:
		printf("December");
		break;
	default:
		printf("Please Enter valid months...");							
	}
}
