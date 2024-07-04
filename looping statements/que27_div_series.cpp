// 1/2 + 2/3 + 3/4 + 4/5 + 5/6 ........ n
#include<stdio.h>
int main(){
	int i,number;
	double sum = 0.0;
	
	printf("Enter number:");
	scanf("%d",&number);
	
	
	printf("Series: ");
	
	for(i=1;i<=number;i++){
		sum += (double)i/(i+1); 
		printf("%d / %d ",i,i+1);
		if(number != i){
			printf(" + ");
		}
		else{
			printf(" - ");
		}
	}
	printf("sum is: %.6f",sum);
}


