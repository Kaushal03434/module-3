//patten : 2
//* 
//* *  
//* * *   
//* * * * 
//* * * * *  
//* * * * * *
//* * * * *
//* * * *
//* * *
//* *
//*
#include <stdio.h>
int main() {
    int n = 11,i,k,j; 

    
	for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

   
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
            
            
        
       

    return 0;
}


//step 1: i,j,n,cuurentChar variable make...
// step 3: use for loop to i=1,i <= n,i++;
//step 4: use nested looping to j=1; j<=i;j++;
//step 5: printf cuurent caracter "A";
//step 6: cureent charcter "A" now ++ to n  row in abcd print...



