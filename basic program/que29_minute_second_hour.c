//WAP to Convert minutes into seconds and hours
#include<stdio.h>
int main(){
	int minutes,seconds,hours;
	
	printf("Enter minutes:");
	scanf("%d",&minutes);
	
	seconds = minutes*3600;
	hours = minutes/60;
	
	printf("\n %d minutes,%d seconds,%d hours",minutes,seconds,hours);
	return 0;
}
