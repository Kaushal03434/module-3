//WAP to Find the Character Is Vowel or Not...
#include<stdio.h>
int main(){
	char alphabet;
	
	printf("Enter the alphabet :");
	scanf("%c",&alphabet);
	
	if((alphabet == 'a') ||(alphabet == 'e') || (alphabet =='i') || (alphabet =='o')
	|| (alphabet =='u')){
		printf("%c is vovel",alphabet);
	}else{
		printf("%c is alphabet",alphabet);
	}
	return 0;
}
