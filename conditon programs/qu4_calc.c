//WAP to make simple calculator (operation include Addition, Subtraction,Multiplication
//, Division, modulo) using conditional statement
#include<stdio.h>
int main(){
	char op;
	int a,b,result;
	
	
	
	
	
	printf("Enter operator(+,-,*,/):");
	scanf("%c",&op);
	
	if((op == '+') || (op == '*') || (op == '-') || (op == '/') ||(op == '%')  ){
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	

	if(op == '+'){
		result = a+b;
		printf("%d + %d sum is %d",a,b,result);
	}
	else if(op == '-'){
		result = a-b;
		printf("%d - %d sub is %d",a,b,result);
	}
	else if(op == '*'){
		result = a*b;
		printf("%d * %d mul is %d",a,b,result);
	}
	else if(op == '/'){
	
		if(b != 0){
			result = a/b;
			printf("%d / %d div is %d",a,b,result);
		}
		else{
			printf("\nError: invalid number!!");
		}
	}
	else if(op == '%'){
		result = a%b;
		printf("%d  %d div is %d",a,b,result);
}
    }
	else{
		printf("invalid operator");
	}
	
	
	return 0;
}
