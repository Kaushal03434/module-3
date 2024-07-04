// WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
	int i,n1=0,n2=1,n3=n1+n2,num;
	
	printf("Enter num:");
	scanf("%d",&num);
	printf("%d %d ",n1,n2);
	
	
	for(i=1;i<=num-2;i++){
		printf("%d ",n3);
		n1= n2;
		n2=n3;
		n3 = n1+n2;
	}
	
	//step 1: make variable num,i,n1=0,n2=1 and n3 = n1+n2;
	//step 2: get user value of num variable;
	//step 3:print n1 and n2;
	//step 4: loop to i=1 and i<=num-2 and i++;
	//step 5:print n3 and swap the value n1=n2,n2=n3 and n3=n1+n2;
}
