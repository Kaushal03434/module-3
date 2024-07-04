//WAP to give to student 5 apples per one student
#include<stdio.h>
int main(){
	
	int num_stud,apple;
	
	printf("Enter the number of students:");
	scanf("%d",&num_stud);
	
	apple = num_stud*5;
	
	printf("Total apples: %d",apple);
	return 0;
}
