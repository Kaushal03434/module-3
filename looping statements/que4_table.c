//WAP to print table up to given numbers
#include<stdio.h>
int main(){
	
	int i,num,mul;
	
	printf("Enter table number:");
	scanf("%d",&num);
	
	
	for (i=1;i<=10;i++){
		mul = num*i;
		printf("\n%d x %d = %d",num,i,mul);
	}
}
