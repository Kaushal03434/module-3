// wap to reverse number series program
#include<stdio.h>
int main(){
	int i,n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("Series: ");
	for(i=n;i>=1;i--){
		printf("%d \t",i);
	}
}
