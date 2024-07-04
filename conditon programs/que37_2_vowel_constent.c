//switch case statement to vovel or constent...
#include<stdio.h>
int main(){
	char a;
	
	printf("Enter a value:");
	scanf("%c",&a);
	
	switch(a){
		case 'a' || 'e' || 'i' || 'o' || 'u':
			printf("The a was vovel");
		break;
		case 'e':
			printf("The e was vovel");
		break;
		case 'i':
			printf("The i was vovel");
		break;
		case 'o':
			printf("The o was vovel");
		break;
		case 'u':
			printf("The u was vovel");
		break;
		default:
			printf("The a was constent");
	}
}
