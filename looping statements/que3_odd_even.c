//WAP to take 10 no. Input from user find out below values
#include<stdio.h>
int main(){
	int i,num,odd = 0,even = 0,evensum = 0,oddsum=0;

	for(i=0;i<10;i++){	
		printf("\n Enter Number:");
	    scanf("%d",&num);
	if (num % 2 == 0) {
       even++;
       evensum += num;
    } else {
        odd++;
        oddsum += num;
    }
    
	}
	printf("\n%d even numbers",even);
    printf("\n %d odd numbers",odd);
    printf("\nthe %d was even number",evensum);
    printf("\nthe %d was even number",oddsum);
	
	return 0;
}
