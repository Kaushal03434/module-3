#include<stdio.h>

int main()
{
	char name[50]; 
	int birth_date; 
	int age;
	char address[100]; 
	
	
	printf("Enter your name:");
	scanf(" %s",& name);
	
	printf("Enter your birthdate:");
		scanf(" %d",& birth_date);
		
	printf("Enter your age:");
		scanf(" %d",& age);
		
	printf("enter your address:");
	scanf(" %s",& address);
	
	
	printf("your name is %s\n",name);
	printf("your birthdate is %d\n",birth_date);
	printf("your age is %d\n",age);
	printf("your number is %s\n",address);

	
	return 0;

}
