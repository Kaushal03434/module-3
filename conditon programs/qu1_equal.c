//WAP to accept two integers and check whether they are equal or not

#include<stdio.h>
int main(){
	
	int a,b;
	
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("Enter b number:");
	scanf("%d",&b);
	
	if(a==b){
		printf("a and b are equal");
	}
	else{
		printf("a and b are not equal");
	}
	return 0;
}
