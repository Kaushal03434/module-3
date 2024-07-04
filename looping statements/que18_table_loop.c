//.Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
int main(){
	int i,n,mul;
	printf("Enter table number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		mul = n*i;
		printf("%d x %d = %d\n",n,i,mul);
	}
}
