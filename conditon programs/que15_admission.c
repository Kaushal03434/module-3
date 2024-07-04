//Write a C program to determine eligibility for admission to a professional cource
#include<stdio.h>
int main(){
	int maths,chem,phy,total,total_2;
	
	printf("Enter maths marks:");
	scanf("%d",& maths);
	
	printf("Enter chem marks:");
	scanf("%d",& chem);
	
	printf("Enter phy marks:");
	scanf("%d",& phy);
	
	total = maths+chem+phy;
	total_2 = maths+phy;
	
	if((maths >= 65 && chem >= 50 && phy >= 55 && total >= 190)||(total_2 >= 140)){
		printf("Congratulations!! You admission sucessfull...\n Total Was %d \n maths + phy = %d",total,total_2);
	}
	else{
		printf("oops!! You are not eligible for admission... \nbcz your "
		"Total Was %d \n maths + phy = %d",total,total_2);
	}
}
