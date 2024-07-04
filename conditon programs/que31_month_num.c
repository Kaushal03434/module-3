#include<stdio.h>
int main(){
	int month_num,days;
	
	printf("Enter month_num: ");
	scanf("%d",&month_num);
	
	if(month_num > 1 && month_num <=12){
	if(month_num == 1 || month_num == 4 || month_num == 6 || month_num == 8 || month_num == 10 || month_num == 12){
		printf("This month has 31 days");
	}else if(month_num == 3 || month_num == 5 || month_num == 7 || month_num == 9 || month_num == 11){
		printf("This month has 30 days");
	}else if(month_num == 2){
		printf("This month has 28 days(not leap year)");
	}}else{
		printf("Please Enter valid month !!!");
	}
}
