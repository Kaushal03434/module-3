//Accept 5 names from user at run time
#include<stdio.h>
int main(){
	int i;
	char name[100];
	
	for(i=1;i<=5;i++){
		printf("Enter Your Name:");
		scanf("%s",&name);
		
		printf("Your Name is: %s\n",name);
	}
}
