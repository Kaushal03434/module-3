//WAP to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main(){
	char alphabet;
	
	printf("Enter your alphabet(lower or uppercase):");
	scanf("%c",&alphabet);
	
	
	if(alphabet >= 'A' && alphabet <= 'Z'){
		printf("Your alphabet uppercase");
	}
	else if(alphabet >= 'a' && alphabet <= 'z'){
		printf("Your alphabet lowercase");
	}
	else if(alphabet >= '0' && alphabet <= '9'){
		printf("Your Enter a digit number");
	}
	else{
		printf("You Enter a special character");
	}
	return 0;
}
