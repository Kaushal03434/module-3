// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main(){
	int i=-1,num,mul=0;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	printf("Series:");
	
	for(i=1;i<=num;i++){
		mul += i*i;
		printf("(%d * %d)",i,i);
		
		if(i != num){
			printf(" + ");
		}
	}
	printf("= %d",mul);
	
	return 0;

}
